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
    insert(&L , 500 , 0);
    insert(&L , 50000 , 1);
    printf("Size of List is : %d\n" , size_List(L));
    printf("%d " , L.arr[0]);
    printf("%d " , L.arr[1]);
    printf("%d " , L.arr[2]);
    printf("%d " , L.arr[3]);
    printf("%d \n" , L.arr[4]);
    retrieve(&L , 0);
    printf("%d " , L.arr[0]);
    printf("%d " , L.arr[1]);
    printf("%d " , L.arr[2]);
    printf("%d \n" , L.arr[3]);
    retrieve(&L , 2);
    printf("%d \n" , L.arr[0]);
    printf("%d " , L.arr[1]);
    printf("%d " , L.arr[2]);
    printf("%d " , size_List(L));
    // printf("%d " , L.arr[1]);
    // printf("%d " , L.arr[2]);
    // printf("%d " , L.arr[3]);
    // printf("%d " , L.arr[4]);
    // printf("%d " , L.arr[5]);
    // retrieve(&L , 0);
    // printf("Size of List is : %d\n" , size_List(L));
    // printf("List is Empty ? : %d  \n" , isEmpty_List(L));
    // retrieve(&L , 0);
    // retrieve(&L , 0);
    // printf("List is Empty ? : %d  \n" , isEmpty_List(L));
    // insert(&L , 5 , 0);
    // insert(&L , 15 , 1);
    // insert(&L , 50 , 0);
    // printf("Size of List is : %d\n" , size_List(L));
    // clear(&L);
    // printf("Size of List is : %d\n" , size_List(L));
    // push_back(&L , 150);
    // printf("Size of List is : %d\n" , size_List(L));
    // push_front(&L , 50);
    // printf("Size of List is : %d\n" , size_List(L));
    // printf("Last Element is : %d\n" , pop_front(&L));
    // printf("Last Element is : %d\n" , pop_back(&L));
    return 0;
}