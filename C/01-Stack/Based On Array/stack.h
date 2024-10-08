#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MaxSize 1e6
typedef int Type;

typedef struct STACK
{
    int top;
    Type *arr;
}stack;

void createStack(stack *s);
short isEmpty(stack s);
void push(stack *s , Type data);
void pop(stack *s);
Type peek(stack s);
void clear_stack(stack *s);
int size_of_stack(stack s);
void copy_stack(stack s , stack *s2);
void print_stack(stack s);


#endif // !STACK_H_INCLUDED
