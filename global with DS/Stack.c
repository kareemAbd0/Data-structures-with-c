//
// Created by kareem on 8/1/2022.
//
#include "global.h"
#include "Stack.h"
#ifndef ISLINKEDSTACK

void CreatStack(Stack * ps)
{
    ps -> top = 0;
}

void Push (StackEntry item ,Stack * ps)
{
    ps ->entry[ps->top] = item;
    ps->top++;
}

void Pop(StackEntry * item , Stack *ps)
{
    *item = (ps->entry[ps ->top - 1]);
    ps -> top --;

}

void StackTop(StackEntry * item, Stack *ps)
{
    *item = (ps->entry[ps->top -1]);
}

int StackEmpty(Stack *ps)
{
    //returns 1 if the stack is empty to be used in an if condition as bool

    return (ps ->top == 0);
}

int StackFull(Stack *ps)
{
    //returns 1 if the stack is full to be used in an if condition as bool

    return (ps ->top == MaxStack);
}

int StackSize(Stack *ps)
{
    return ps ->top;
}

void ClearStack(Stack *ps)
{
    ps ->top = 0;
}

void TraverseStack(Stack *ps , void  (*dfun) (StackEntry))
{
    for (int i = ps->top; i > 0 ; i -- )
    {
        (*dfun)(ps->entry[i -1]);
    }
}
#else


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
    s->size = 0;

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


#endif