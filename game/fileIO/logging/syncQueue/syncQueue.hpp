//
// Created by axiom on 6/19/19.
//

#ifndef PANORAMA_SYNCQUEUE_HPP
#define PANORAMA_SYNCQUEUE_HPP

#include <zconf.h>
#include <malloc.h>
#include <semaphore.h>


class SyncQueue {
public:
    class QNode {
    public:
        explicit QNode(const char* string);
        ~QNode();
        const char* val;
        QNode* next;
    };
    SyncQueue();
    ~SyncQueue();

    void put(const char* string);
    const char* pop();

    bool isEmpty();
private:
    QNode* head;
    sem_t sem{};
};

/*
typedef struct QNode{
    char* val;
    struct QNode* next;
}QNode;

typedef struct {
    QNode* head;
    sem_t qSem;
}SQueue;
*/

/*
SQueue* newSQueue();
void destroySQueue(SQueue* queue);
void putSQueue(SQueue* queue, const char* string);
char* popSQueue(SQueue* queue);
int isNEmptyQueue(SQueue* queue);
QNode* newQnode(const char* string);
*/
#endif //PANORAMA_SYNCQUEUE_HPP
