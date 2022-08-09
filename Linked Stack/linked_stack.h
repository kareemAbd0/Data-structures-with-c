//
// Created by karee on 8/6/2022.
//

#ifndef LINKED_STACK_LINKED_STACK_H
#define LINKED_STACK_LINKED_STACK_H

#define StackEntry int


typedef struct stack_node
{
    StackEntry entry;
   struct stack_node *next;
}StackNode;


typedef struct stack{
    StackNode *top;
    int size;

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

#endif //LINKED_STACK_LINKED_STACK_H
