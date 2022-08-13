#include <stdio.h>
#include "LinkedQueue.h"
void Display(QueueEntry e)
{
    printf("%d\n",e);
}


int main() {

    QueueEntry e = 5;
    Queue q ;

    CreateQueue(&q);

    if(!QueueFull( &q))
    {
        Add(e,&q);

    }
    e = 8;

    if(!QueueFull( &q))
    {
        Add(e,&q);

    }

    e = 24;

    if(!QueueFull( &q))
    {
        Add(e,&q);

    }

    e = 33;

    if(!QueueFull( &q))
    {
        Add(e,&q);

    }
    if(!QueueEmpty(&q))
    {
        Serve(&e,&q);
    }

    TraverseQueue(&q,&Display);
    printf("%d", QueueSize(&q));
    ClearQueue(&q);
    TraverseQueue(&q,&Display);

    return 0;
}
