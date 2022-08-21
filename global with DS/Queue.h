//
// Created by kareem on 8/10/22.
//


#ifndef ARRAY_QUEUE_ARRAYQUEUE_H
#define ARRAY_QUEUE_ARRAYQUEUE_H

#include "global.h"
#ifdef ISLINKEDQUEUE
typedef struct queuenode
{
    QueueEntry element;
    struct queuenode* next;

} QueueNode;


typedef struct queue
{
    QueueNode * rear;
    QueueNode * front;
    int size ;
}Queue;
#else

 typedef struct queue
{

    QueueEntry  front;
    QueueEntry  rear;
    QueueEntry QueueArray [MaxQueue];
    int size;
} Queue ;
#endif

void CreateQueue(Queue *);

void Add(QueueEntry, Queue * );

void Serve (QueueEntry * , Queue *);

int QueueSize (Queue *);

int QueueEmpty(Queue *);

int QueueFull(Queue *);

void ClearQueue(Queue *);


void TraverseQueue(Queue *, void (*)(QueueEntry) );









#endif //ARRAY_QUEUE_ARRAYQUEUE_H
