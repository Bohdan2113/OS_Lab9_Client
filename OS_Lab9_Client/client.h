#ifndef CLIENT_H
#define CLIENT_H

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#include <thread>
#include <sstream>
#include <string>
#include <queue>

#include <iostream>
#include <iomanip>

#include <stdio.h>
#include <stdlib.h>

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"
#define DEFAULT_HOST "127.0.0.1"

#define SLEEP_TIME 500

#define STUTDOWN_ERROR -1
#define EXIT_CODE_RECV 0
#define EXIT_CODE_SEND 0
#define SEND_MESS_FAIL 1
#define RESV_MESS_FAIL 1

HANDLE mutexQueue;
struct addrinfo* result = NULL;

std::string progStage = "DS";
bool isInputStopped = false;

HANDLE sendThread;
HANDLE receiveThread;

int sessionTime = 0;
std::string sessionTopic;


typedef struct idea {
    int ideaTID;
    std::string message;
} Idea;
std::vector<Idea> ideaVector;

typedef struct ideaExt {
    int ideaTID;
    int ideaVoices;
    std::string name;
    std::string message;
} IdeaExt;
std::vector<IdeaExt> ideaExtVector;

std::queue<std::string> messageQueue;

DWORD WINAPI inputMessages(LPVOID param);

DWORD WINAPI sendMessages(LPVOID param);

DWORD WINAPI receiveMessages(LPVOID param);

bool connectToServer(SOCKET& ConnectSocket, struct addrinfo* result);

int closeConnection(SOCKET& ConnectSocket);

void createThreads(SOCKET& ConnectSocket);





bool tryListening(SOCKET& ConnectSocket, const std::string& name);

void quitSending();

void sendIdea(const std::string& ideaStr);

void sendVoice(const std::string& voiceStr);


#include "client.cpp"

#endif // CLIENT_H
