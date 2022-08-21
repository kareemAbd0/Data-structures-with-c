//
// Created by karee on 8/1/2022.
//


//
// Created by karee on 8/1/2022.
//

#ifndef ARRAY_BASED_STACK_STACK_H
#define ARRAY_BASED_STACK_STACK_H
#include "global.h"

#ifdef ISLINKEDSTACK

typedef struct stack_node
{
    StackEntry entry;
    struct stack_node *next;
}StackNode;


typedef struct stack{
    StackNode *top;
    int size;

}Stack ;

#else

typedef struct stack{
    int top;
    StackEntry entry [MaxStack];
}Stack ;

#endif

void CreatStack(Stack *);

void Push (StackEntry , Stack * );

void Pop (StackEntry  * , Stack *);

void StackTop(StackEntry  *, Stack *);

int StackEmpty(Stack *);

int StackFull(Stack *);

int StackSize(Stack *);

void ClearStack(Stack *);

void TraverseStack	(Stack *, void (*)(StackEntry));
#endif //ARRAY_BASED_STACK_STACK_H





