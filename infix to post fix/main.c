#include <stdio.h>
#include "linked_stack.h"


void Display(StackEntry e)
{

    printf("%c",e);

}

int precedence(char op1,char op2)
{
    if(((op1 == '/') && (op2 == '*')) || ((op1 == '*') && (op2 == '/')) || ((op1 == '*') && (op2 == '*')) || ((op1 == '/') && (op2 == '/')) ) return 0;
    if(((op1 == '+') && (op2 == '-')) || ((op1 == '-') && (op2 == '+')) || ((op1 == '+') && (op2 == '+')) || ((op1 == '-') && (op2 == '-')) ) return 0;

    if(op1 == '$') return 1;

    if((op1 == '*') || (op1 == '/') )
    {
       return (op2 != '$');
    }

    if((op1 = '+') || (op2 = '-'))
    {
        return ((op2!='$') && (op2 != '*') && (op2 != '/'));
    }
    return 0;

}


int IsDigit (char e)
{
    return (e>='0' && e<='9' );

}



void InToPost(char * string )
{
    Stack stack1;
    Stack stack2;
    CreatStack(&stack1);
    CreatStack(&stack2);


    int i = 0;

    while (string[i] != '\0')
    {

        if(IsDigit(string[i]))
        {
            Push(string[i],&stack2);
        }
        else
        {
               if(StackEmpty(&stack1))
               {
                   Push(string[i],&stack1);
               } else
               {
                   char LastOp;
                   StackTop(&LastOp,&stack1);
                   if (precedence(string[i], LastOp))
                   {
                       Push(string[i],&stack1);
                   } else
                   {
                           char transfer;
                           Pop(&transfer, &stack1);
                           Push(string[i], &stack1);
                           Push(transfer, &stack2);


                   }
               }

        }
        i++;


    }

    ReverseTraverseStack(&stack2,&Display);
    TraverseStack(&stack1,&Display);
}


int main() {

    char infix [] = "5-4*3+2/1";


    InToPost(infix);

   // printf("Hello, World!\n");
    return 0;



}
