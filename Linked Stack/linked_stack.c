//
// Created by karee on 8/6/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "linked_stack.h"

void CreatStack(Stack *s)
{
  s->top = NULL;
  s->size = 0;
}

void Push(StackEntry e,Stack * s)
{
    StackNode *p =(StackNode*) malloc(sizeof(StackNode));
    p->entry = e;
    p->next = s->top;
    s->top = p;
    s->size ++;
}

void Pop (StackEntry *e,Stack * s)
{
    *e = (s->top) ->entry;
    StackNode *pf = s->top;
    StackNode *p = (s->top)->next;
    free(pf);
    s->top = p;
    s->size --;
}

void StackTop(StackEntry *e,Stack * s)
{
    *e = (s->top) ->entry;
}

int StackEmpty(Stack * s)
{
    //returns a bool value for if the stack is empty
    if ( s->top == NULL )
    {
        return 1;
    } else
    {
        return 0;
    }

}

int StackFull(Stack *s)
{
    //in linked stacks the stack is never full, user interface should remain unchanged regardless
    return 0;
}

int StackSize(Stack *s)
{
    return s->size;
}

void ClearStack(Stack * s)
{

    while (s->top != NULL)
    {
        StackNode *p = s->top;
        StackNode *p2 = (s->top)->next;
        free(p);
        s->top = p2 ;
    }

}

void TraverseStack	(Stack * s, void (*dfun)(StackEntry))
{
    StackNode *p = s->top;
    while (p != NULL)
    {
        (*dfun)(p->entry);
        p = p->next;
    }
}





