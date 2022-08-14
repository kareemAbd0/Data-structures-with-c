//
// Created by kareem on 8/13/22.
//

#ifndef LINKED_QUEUE_LINKEDQUEUE_H
#define LINKED_QUEUE_LINKEDQUEUE_H

#define QueueEntry int

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



void CreateQueue(Queue *);

void Add (QueueEntry,Queue*);

void Serve (QueueEntry * , Queue *);

int QueueEmpty(Queue *);

int QueueFull(Queue *);
int QueueSize(Queue *);

void ClearQueue(Queue * );
void TraverseQueue(Queue *, void (*) (QueueEntry));






#endif //LINKED_QUEUE_LINKEDQUEUE_H
