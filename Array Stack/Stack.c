//
// Created by karee on 8/1/2022.
//
#include "Stack.h"

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




