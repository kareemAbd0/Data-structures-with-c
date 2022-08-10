//
// Created by kareem on 8/10/22.
//


#ifndef ARRAY_QUEUE_ARRAYQUEUE_H
#define ARRAY_QUEUE_ARRAYQUEUE_H

#define MaxElement 50
#define QueueEntry int

 typedef struct queue
{

    QueueEntry  front;
    QueueEntry  rear;
    QueueEntry QueueArray [MaxElement];
    int size;
} Queue ;

void CreateQueue(Queue *);

void Add(QueueEntry, Queue * );

void Serve (QueueEntry * , Queue *);

int QueueSize (Queue *);

int QueueEmpty(Queue *);

int QueueFull(Queue *);

void ClearQueue(Queue *);


void TraverseQueue(Queue *, void (*)(QueueEntry) );









#endif //ARRAY_QUEUE_ARRAYQUEUE_H
