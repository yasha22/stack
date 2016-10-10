#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct stack
{
    int* stk; //il puntatore akk'area occupata dallo stack
    int size; //la dimensione dell'area
    int sp; //lo stack pointer
} stack;

stack* CreateStack(int dim);

void DeleteStack(stack* s);

int isFull(stack* s);

int isEmpty(stack* s);

void push(stack* s, int value);

int pop(stack* s);

int top(stack* s);

#endif // STACK_H_INCLUDED
