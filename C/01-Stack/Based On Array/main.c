#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

int main(void)
{
    stack S1 , S2;
    createStack(&S1);
    createStack(&S2);
    int size;
    printf("Please Enter Num Of initial Elements in Stack : ");
    scanf("%d" , &size);
    for(int i = 0 ; i < size ;i++)
        push(&S1 , i * 9);

    copy_stack(S1 , &S2);
    pop(&S2);
    pop(&S2);
    printf("size of Stack2 after pop Elements is : %d\n" , size_of_stack(S2));
    print_stack(S2);
    return 0;
}