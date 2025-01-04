#include "stack.h"
#include <stdio.h>

#define MAX_SIZE 10

void initStack(struct Stack *s) {
    s->length = 0;
}

int peek(struct Stack *s) {
    if (s->length == 0) {
        printf("Failed to peek. Stack is empty.\n");
        return -1;
    }
    return s->array[s->length - 1];
}

int pop(struct Stack *s) {
    if (s->length == 0) {
        printf("Failed to pop. Stack is empty.\n");
        return -1;
    }
    
    s->length--;
    return s->array[s->length];
}

void push(struct Stack *s, int value) {
    if (s->length >= MAX_SIZE) {
        printf("Failed to push %d to stack. Stack reached its maximum size of %d.\n", value, MAX_SIZE);
        return;
    }

    s->array[s->length] = value;
    s->length++;
}