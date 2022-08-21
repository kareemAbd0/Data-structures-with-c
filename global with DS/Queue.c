//
// Created by kareem on 8/10/22.
//
#include "Queue.h"

#ifndef ISLINKEDQUEUE
void CreateQueue(Queue * q)
{
    q ->front = 0;
    q ->rear = -1;
    q->size = 0;
}


void Add (QueueEntry e , Queue * q)
{
    q ->rear = (q->rear+1) % MaxQueue;
    q->QueueArray[q->rear] = e;
    q->size++;

}


void Serve(QueueEntry * e , Queue * q)
{
    *e = q->QueueArray[q->front];
    q ->front = (q->front+1) % MaxQueue;
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
    return q->size == MaxQueue;

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
        pos = (pos+1) % MaxQueue;
    }
}
#else
void CreateQueue(Queue * q)
{
    q->size = 0;
    q ->front = NULL;
    q->rear = NULL;
}

void Add (QueueEntry e , Queue * q )
{
    QueueNode * p = (QueueNode*) malloc (sizeof (QueueNode));

    if (q->size == 0) {
        q->front = p;

    } else {

        q->rear->next = p;
    }
    q->rear = p;

    q->rear ->element= e;

    q->size ++;

}

void Serve (QueueEntry *e , Queue * q )
{
    QueueNode * p = q->front;
    *e = p ->element;
    q->front = p->next;
    free(p);
    q->size--;
}

int QueueFull(Queue * q)
{
    return 0;
}

int QueueEmpty(Queue * q)
{
    if(q->size == 0)
    {
        return 1;
    } else
    {
        return 0;
    }
}
int QueueSize(Queue * q)
{
    return q->size;
}

void ClearQueue(Queue * q)
{
    QueueNode * p = q->front;
    QueueNode * p2;
    for (int i = 0; i < q->size ; ++i)
    {
        p2 = p->next;
        free(p);
        p = p2;
    }
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;

}




void TraverseQueue(Queue * q, void (*dfun) (QueueEntry))
{
    QueueNode * p = q->front;

    for ( int i = 0; i <  q-> size ; ++i)
    {
        (*dfun)(p->element);
        p = p->next;
    }

}
#endif







