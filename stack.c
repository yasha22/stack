#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define ERR_ALLOCATION -1001

stack* CreateStack(int dim)
{
    stack *new_stack;

    //allocazione struttura
    new_stack = (stack *)malloc(sizeof(stack));
    if(new_stack == NULL)
        exit(ERR_ALLOCATION);

    //allocazione vettore
    new_stack->stk = (int *)malloc(dim * sizeof(int));
    if(new_stack == NULL)
        exit(ERR_ALLOCATION);

    //inizializzo i valori della struct
    new_stack -> size = dim;
    new_stack -> sp = new_stack->stk+dim;

    return new_stack;
}

void DeleteStack(stack* s)
{
    free(s->stk);
    free(s);

}

int isFull(stack* s)
{
    //se lo sp punta all ultimo elemento del vettore ...
    if(s->sp == s->(stk+dim))
        return 1;
    else
        return 0;
}

int isEmpty(stack* s)
{
    //se lo sp punta al primo elemento del vettore ...
    if(s->sp == s->stk)
        return 1;
    else
        return 0;
}

void push(stack* s, int value)
{
    if(isFull(s))
        exit(STACK_OVERFLOW);
    else
    {
        s -> *sp = value;
        s -> sp++;
    }

}

int pop(stack* s)
{
    if(isEmpty())
        exit(STACK_EMPTY);
    else
        s -> sp--;
}

int top(stack* s)
{

}
