//
// Created by kareem on 8/10/22.
//
#include <stdio.h>
#include "ArrayQueue.h"

void CreateQueue(Queue * q)
{
    q ->front = 0;
    q ->rear = -1;
    q->size = 0;
}


void Add (QueueEntry e , Queue * q)
{
    q ->rear = (q->rear+1) % MaxElement;
    q->QueueArray[q->rear] = e;
    q->size++;

}


void Serve(QueueEntry * e , Queue * q)
{
    *e = q->QueueArray[q->front];
    q ->front = (q->front+1) % MaxElement;
    q->size -- ;
}


int QueueSize (Queue * q)
{
    return q->size;
}


int QueueEmpty(Queue * q)
{
    return q->size == 0 ;
}


int QueueFull(Queue * q)
{
    return q->size == MaxElement;

}
void ClearQueue(Queue * q )
{
    q ->front = 0;
    q ->rear = -1;
    q->size = 0;
}


void TraverseQueue(Queue * q, void (* dfun )(QueueEntry) )
{
    for (int i = 0,pos = q->front; i < q->size ; ++i)
    {
        (*dfun) (q->QueueArray[pos]);
        pos = (pos+1) % MaxElement;
    }
}







