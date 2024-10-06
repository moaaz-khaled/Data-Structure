#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(stack *s) {
    s->top = -1;
    s->arr = (Type*)malloc(MaxSize * sizeof(Type));
}

short isEmpty(stack s) {
    return s.top == -1;
}

void push(stack *s , Type data) 
{
    if(s->top == MaxSize - 1)
    {
        printf("Can't push more than 10 element : Stack is OverFlow!!!\n");
        return ;
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}


void pop(stack *s)
{
    if(isEmpty(*s))
    {
        printf("Can't pop : Stack is underFlow!!!\n");
        return;
    }
    else
        s->top--;
}


Type Top(stack s) {
    if(isEmpty(s))
    {
        printf("Can't pop ! -> Stack is Empty!\n");
    }
    return s.arr[s.top];
}


int size_of_stack(stack s) {
    return s.top + 1;
}


Type clear_stack(stack *s)
{
    free(s->arr);
    s->top = -1;
}



void print_stack(stack s) {
    for(int i = s.top ; i >= 0 ; i--)
        printf("%d ",s.arr[i]); // ------> %d Because Data Type is int That is update Based on program 
    printf("\n");
}
// Because This program With c language i can't use Template Such as C++
// There is Exist another way To implement it With *void && union && size_of



void copy_stack(stack s , stack *s2)
{
    for(int i = 0 ; i <= s.top ; i++)
        s2->arr[++s2->top] = s.arr[i];
}
