#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.c"

int main(void)
{
    List L;
    Creat_List(&L);
    printf("Size of List is : %d\n" , size_List(L));
    insert(&L , 5 , 0);
    insert(&L , 15 , 1);
    insert(&L , 50 , 0);
    printf("Size of List is : %d\n" , size_List(L));
    retrieve(&L , 0);
    printf("Size of List is : %d\n" , size_List(L));
    printf("List is Empty ? : %d  \n" , isEmpty_List(L));
    retrieve(&L , 0);
    retrieve(&L , 0);
    printf("List is Empty ? : %d  \n" , isEmpty_List(L));
    insert(&L , 5 , 0);
    insert(&L , 15 , 1);
    insert(&L , 50 , 0);
    printf("Size of List is : %d\n" , size_List(L));
    clear(&L);
    printf("Size of List is : %d\n" , size_List(L));
    return 0;
}