//
// Created by karee on 8/1/2022.
//


//
// Created by karee on 8/1/2022.
//

#ifndef ARRAY_BASED_STACK_STACK_H
#define ARRAY_BASED_STACK_STACK_H

#define StackEntry int
#define MaxStack 100



typedef struct stack{
    int top;
    StackEntry entry [MaxStack];
}Stack ;


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





