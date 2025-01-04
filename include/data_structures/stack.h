#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

struct Stack {
    int stack[MAX_SIZE];
    int length;
};

void initStack(struct Stack *s);
int peek(struct Stack *s);
int pop(struct Stack *s);
void push(struct Stack *s, int value);

#endif
