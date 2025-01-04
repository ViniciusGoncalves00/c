#include <stdio.h>
#include "functions.h"
#include "data_structures/stack.h"
 
int main ()
{
    struct Stack myStack;
    initStack(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);
    push(&myStack, 50);
    push(&myStack, 60);
    push(&myStack, 70);
    push(&myStack, 80);
    push(&myStack, 90);
    push(&myStack, 100);

    for (int i = 0; i < myStack.length; i++)
    {
        printf("Index: %d, value %d: \n", i, myStack.array[i]);
    }

    printf("Pop: %d: \n", pop(&myStack));
    printf("Pop: %d: \n", pop(&myStack));
    printf("Peek: %d: \n", peek(&myStack));

    for (int i = 0; i < myStack.length; i++)
    {
        printf("Index: %d, value %d: \n", i, myStack.array[i]);
    }
 
  return 0;
}