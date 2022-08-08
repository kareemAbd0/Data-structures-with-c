#include <stdio.h>
#include "linked_stack.h"


void Display(StackEntry e)
{
    printf("%d \n",e);
}



int main() {
StackEntry e = 5;
Stack s;
CreatStack(&s);

if(!StackFull(&s))
{
    Push(e,&s);
}
e = 6;
if(!StackFull(&s))
{
    Push(e,&s);
}
e = 12;
if(!StackFull(&s))
{
    Push(e,&s);
}
e =44;
if(!StackFull(&s))
{
    Push(e,&s);
}
if(!StackEmpty(&s))
{
    Pop(&e,&s);
}
TraverseStack(&s,&Display);

ClearStack(&s);
if(StackEmpty(&s))
{
    printf("the stack is empty");
}


//printf("%d", StackSize(&s));









}
