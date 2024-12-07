#include "client.h"

#define WIN32_LEAN_AND_MEAN

bool tryListening(SOCKET& ConnectSocket, const std::string& name)
{
    std::string message;

    progStage = "EL";
    message = "CCN:" + name;

    WaitForSingleObject(mutexQueue, INFINITE);
    messageQueue.push(message);
    ReleaseMutex(mutexQueue);

    if (!connectToServer(ConnectSocket, result)) {
        return false;
    }


    qDebug() << "You have successfully connected to the room. Wait until the sending session starts.\n";

    createThreads(ConnectSocket);

    qDebug() << "tryListening ended";

    return true;
}

void quitSending()
{
    WaitForSingleObject(mutexQueue, INFINITY);
    messageQueue.push("AM");
    ReleaseMutex(mutexQueue);
}

void sendIdea(const std::string& ideaStr)
{
    std::string message;
    message = "TGH:" + ideaStr;

    WaitForSingleObject(mutexQueue, INFINITY);
    messageQueue.push(message);
    ReleaseMutex(mutexQueue);
}

void sendVoice(const std::string& voiceStr)
{
    std::string message;
    message = "RNK:" + voiceStr;

    // printf("You have successfully voted.\n"
    //        "Please wait for other users.\n");

    WaitForSingleObject(mutexQueue, INFINITE);
    messageQueue.push(message);
    ReleaseMutex(mutexQueue);

    quitSending();

    // isInputStopped = true;
}






// DWORD WINAPI inputMessages(LPVOID param) {
//     SOCKET* ConnectSocket = (SOCKET*)param;

//     DWORD exitThreadCode = 0;

//     while (true) {
//         std::string message;
//         getline(std::cin, message);

        //if (message == "exit") {
        //    printf("Closing connection with server...\n");
        //    closeConnection(*ConnectSocket);
        //    printf("Connection closed.\n");
        //    exitThreadCode = 1;
        //    break;
        //}

        // if (progStage == "SL") {

        //     progStage = "EL";
        //     message = "CCN:" + message;

        //     WaitForSingleObject(mutexQueue, INFINITE);
        //     messageQueue.push(message);
        //     ReleaseMutex(mutexQueue);

        //     if (exitThreadCode = connectToServer(*ConnectSocket, result)) break;
        //     printf("You have successfully connected to the room.\n"
        //            "Wait until the sending session starts.\n");
        //     createThreads(*ConnectSocket);

        //     continue;

        // } else if (progStage == "EL") {
        //     printf("EL STAGE");
        //     continue;

        // } else if (progStage == "SS") {
        //     if (message == "ALL") {
        //         WaitForSingleObject(mutexQueue, INFINITY);
        //         messageQueue.push("AM");
        //         ReleaseMutex(mutexQueue);
        //         continue;
        //     }
        //     message = "TGH:" + message;

        // } else if (progStage == "SV") {
        //     message = "RNK:" + message;
        //     printf("You have successfully voted.\n"
        //            "Please wait for other users.\n");

        //     WaitForSingleObject(mutexQueue, INFINITE);
        //     messageQueue.push(message);
        //     messageQueue.push("AM");
        //     ReleaseMutex(mutexQueue);

        //     isInputStopped = true;
        //     continue;

//         } else if (progStage == "RS") {
//             progStage = "SL";
//             system("cls");
//             std::cout << "Enter your name: ";
//             continue;
//         }

//         while (isInputStopped) {
//             Sleep(SLEEP_TIME);
//         }
//         WaitForSingleObject(mutexQueue, INFINITE);
//         messageQueue.push(message);
//         ReleaseMutex(mutexQueue);
//     }

//     return exitThreadCode;
// }

DWORD WINAPI sendMessages(LPVOID param)
{
    qDebug() << "Send thread started";
    SOCKET* ConnectSocket = (SOCKET*)param;

    std::string message;
    int iResult;
    int exitCode;

    while (true) {
        while (true) {
            if (!messageQueue.empty()) break;
            Sleep(SLEEP_TIME);
        }
        WaitForSingleObject(mutexQueue, INFINITE);
        message = messageQueue.front();
        qDebug() << "Send message: " << message;
        messageQueue.pop();
        ReleaseMutex(mutexQueue);

        iResult = send(*ConnectSocket, message.c_str(), (int)message.length(), 0);
        if (iResult == SOCKET_ERROR) {
            qDebug() << "Send message failed with error code: " << WSAGetLastError();
            exitCode = SEND_MESS_FAIL;
            break;
        }
    }

    qDebug() << "Send thread ebnded";
    return exitCode;
}

DWORD WINAPI receiveMessages(LPVOID param)
{
    SOCKET* ConnectSocket = (SOCKET*)param;

    char recvBuf[DEFAULT_BUFLEN];

    int iResult;
    int exitCode;

    while (true) {

        iResult = recv(*ConnectSocket, recvBuf, DEFAULT_BUFLEN, 0);

        if (iResult > 0) {
            recvBuf[iResult] = '\0';
            // printf("\t\t\tServer: %s\n", recvBuf);

            std::string message(recvBuf);
            qDebug() << "Received message: " << message;
            if        (message == "SL") {

            } else if (message == "SS") {
                progStage = "SS";
                // printf("Sending session started.\nEnter \"ALL\" to end sending.\nEnter your ideas on topic: ");
                // std::cout << "\"" << sessionTopic << "\"\n";

            } else if (message == "ES") {
                progStage = "ES";
                // printf("Sending session is complete.\n"
                //        "Wait until the voting session starts.\n");
                isInputStopped = true;
                WaitForSingleObject(mutexQueue, INFINITY);
                messageQueue.push("AM");
                ReleaseMutex(mutexQueue);

            } else if (message == "SV") {
                progStage = "SV";
                // printf("Voting session started.\n"
                //        "Ideas list:\n");
                // std::cout
                //     << "==========================\n"
                //     << std::setw(4) << "TID"  << " | "
                //     << "Idea" << "\n"
                //     << "==========================\n";
                // for (const auto& idea : ideaVector) {
                //     std::cout
                //         << std::setw(4) << idea.ideaTID << " | "
                //         << idea.message << "\n";
                // }
                // std::cout << "==========================\n";

                // printf("Enter TID of three top ideas:\n");
                isInputStopped = false;

            } else if (message == "EV") {
                progStage = "EV";
                ideaVector.clear();
                // printf("Voting session ended.\n");

            } else if (message == "TS") {
                progStage = "TS";
                isInputStopped = false;
                // std::cout << "Results successfully received.\n"
                //              "Top 3 ideas:\n";
                // std::cout
                //     << "============================================\n"
                //     << std::setw(6)               << "TID"    << " | "
                //     << std::setw(8)               << "Voices" << " | "
                //     << std::setw(12) << std::left << "Name"   << " | "
                //     << "Idea"   << "\n "
                //     << "============================================\n";
                // for (const auto& idea : ideaExtVector) {
                //     std::cout
                //         << std::setw(6)               << idea.ideaTID     << " | "
                //         << std::setw(8)               << idea.ideaVoices  << " | "
                //         << std::setw(12) << std::left << idea.name        << " | "
                //         << idea.message     << "\n";
                // }
                // std::cout
                //     << "============================================\n";

                // printf("Current session ended.\n"
                //        "Enter \"RS\" to restart.\n");
                ideaVector.clear();
                TerminateThread(sendThread, 0);
                closeConnection(*ConnectSocket);
                ExitThread(0);

            } else {
                std::string commandType = message.substr(0, 4);
                message.erase(0, 4);
                if (commandType == "STP:") {
                    sessionTopic = message;

                } else if (commandType == "STM:") {
                    sessionTime = std::stoi(message);

                } else if (commandType == "TGH:") {
                    size_t iPos = message.find(' ');

                    std::string TIDStr = message.substr(0, iPos);
                    int TID = std::stoi(TIDStr);

                    std::string ideaStr = message.substr(iPos + 1);

                    Idea idea = { TID, ideaStr };
                    ideaVector.push_back(idea);

                } else if (commandType == "TP3:") {
                    size_t iPos = 0;
                    size_t jPos = message.find(' ');
                    std::string TIDStr = message.substr(0, jPos);
                    int TID = std::stoi(TIDStr);

                    iPos = message.find(' ', jPos + 1);
                    std::string voicesStr = message.substr(jPos + 1, iPos - (jPos + 1));
                    int voices = std::stoi(voicesStr);

                    jPos = message.find('|', iPos + 1);
                    std::string nameStr;
                    nameStr = message.substr(iPos + 1, jPos - (iPos + 1));

                    std::string ideaStr;
                    ideaStr = message.substr(jPos + 1);

                    IdeaExt idea = { TID, voices, nameStr, ideaStr };
                    ideaExtVector.push_back(idea);
                }
            }

        } else {
            if (iResult == 0) {
                // printf("Server deleted you ;(\n");
            } else {
                // printf("Server aborted\n");
            }
            progStage = "LOH";
            // system("cls");
            // std::cout << "Enter your name: ";
            isInputStopped = false;
            ideaVector.clear();
            ideaExtVector.clear();
            TerminateThread(sendThread, 0);
            exitCode = closeConnection(*ConnectSocket);
            ExitThread(0);
        }
    }
    return exitCode;
}

int closeConnection(SOCKET& ConnectSocket) {
    int iResult;
    int exitCode = 0;

    if (ConnectSocket == INVALID_SOCKET) {
        // printf("Socket is already invalid. No need to close.\n");
        exitCode = 0;

    } else {
        iResult = shutdown(ConnectSocket, SD_SEND);
        if (iResult == SOCKET_ERROR) {
            // printf("Shutdown failed with error code: %d\n", WSAGetLastError());
            exitCode = STUTDOWN_ERROR;
        }

        iResult = closesocket(ConnectSocket);
        if (iResult == SOCKET_ERROR) {
            // printf("closesocket failed with error code: %d\n", WSAGetLastError());
            exitCode = 1;
        }

        ConnectSocket = INVALID_SOCKET;
    }

    return exitCode;
}

bool connectToServer(SOCKET& ConnectSocket, struct addrinfo* result) {

    qDebug() << "func start";
    int iResult = 0;
    int exitCode = 1;

        for (struct addrinfo* ptr = result; ptr != NULL; ptr = ptr->ai_next) {

            qDebug() << "new cycle!" << WSAGetLastError();
            exitCode = 1;
            ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);
            if (ConnectSocket == INVALID_SOCKET) {
                qDebug() << "socket failed!" << WSAGetLastError();
                WSACleanup();
                exitCode = 0;
                break;
            }

            iResult = connect(ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
            if (iResult == SOCKET_ERROR) {
                qDebug() << "connect failed!" << WSAGetLastError();
                closesocket(ConnectSocket);
                ConnectSocket = INVALID_SOCKET;
                exitCode = 0;
            }
            else break;
        }


    qDebug() << "exit code = " << exitCode;
    return exitCode;
}

void createThreads(SOCKET& ConnectSocket) {
    qDebug() << "Create threads started";
    DWORD sendThreadID;
    sendThread = CreateThread(
        NULL,
        0,
        sendMessages,
        &ConnectSocket,
        0,
        &sendThreadID
        );

    DWORD receiveThreadID;
    receiveThread = CreateThread(
        NULL,
        0,
        receiveMessages,
        &ConnectSocket,
        0,
        &receiveThreadID
        );
}

// int __cdecl main(int argc, char** argv) {

//     mutexQueue = CreateMutex(NULL, FALSE, NULL);
//     if (mutexQueue == NULL) {
//         printf("CreateMutex failed with error: %d\n", GetLastError());
//         return 1;
//     }

//     int iResult = 0;

//     WSADATA wsaData;
//     SOCKET ConnectSocket = INVALID_SOCKET;
//     struct addrinfo  hints;

//     iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
//     if (iResult != 0) {
//         printf("WSAStartup failed with error: %d\n", iResult);
//         return 1;
//     }

//     ZeroMemory(&hints, sizeof(hints));
//     hints.ai_family = AF_UNSPEC;
//     hints.ai_socktype = SOCK_STREAM;
//     hints.ai_protocol = IPPROTO_TCP;

//     iResult = getaddrinfo(DEFAULT_HOST, DEFAULT_PORT, &hints, &result);

//     if (iResult != 0 || result == NULL) {
//         printf("getaddrinfo failed with error: %d\n", iResult);
//         WSACleanup();
//         return 1;
//     }

//     printf("Press \"Enter\" to start program: ");

//     DWORD  inputThreadID;
//     HANDLE inputThread = CreateThread(
//         NULL,
//         0,
//         inputMessages,
//         &ConnectSocket,
//         0,
//         &inputThreadID
//         );

//     while (true) {
//         Sleep(SLEEP_TIME * 10);
//     }

//     freeaddrinfo(result);
//     CloseHandle(mutexQueue);
//     closesocket(ConnectSocket);
//     WSACleanup();

//     return 0;
// }
