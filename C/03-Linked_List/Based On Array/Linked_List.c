#include<stdio.h>
#include<stdlib.h>
#include "Linked_List.h"

void Creat_List(List *L)
{
    L->size = 0;
    L->arr = (Type*)(malloc(MAX * sizeof(Type)));
    if (L->arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

int isEmpty_List(List L)
{
    return L.size == 0;
}

int isFull_List(List L)
{
    return L.size == MAX;
}

void insert(List *L , Type data , int pos)
{
    if(pos > L->size || pos < 0)
    {
        printf("out of boundary\n");
        return;
    }
    for(int i = L->size - 1 ; i >= pos ; i--)
    {
        L->arr[i+1] = L->arr[i];
    }
    L->arr[pos] = data;
    L->size++;
}


Type retrieve(List *L , int pos)
{
    if(pos > L->size - 1 || pos < 0) 
    {
        printf("out of boundary\n");
        return (Type)0;
    }
    else
    {
        Type data = L->arr[pos];
        for(int i = pos ; i < L->size - 1 ;i++)
        {
            L->arr[i] = L->arr[i+1];
        }
        L->arr[L->size -1] = 0;
        L->size--;
        return data;
    }
}

int size_List(List L)
{
    return L.size;
}

void clear(List *L)
{
    free(L->arr);
    L->arr = (Type*)malloc(MAX * sizeof(Type));
    if (L->arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    L->size = 0;
}

void push_back(List *L , Type data)
{
    if (isFull_List(*L)) 
    {
        printf("List is full, cannot push_back\n");
        return;
    }
    insert(L , data , L->size);
}
void push_front(List *L , Type data)
{
    insert(L , data , 0);
}

Type pop_back(List *L)
{
    if (isEmpty_List(*L)) 
    {
        printf("List is empty, cannot pop_back\n");
        return (Type)0;
    }
    Type info = retrieve(L , L->size-1);
    return info;
}

Type pop_front(List *L)
{
    Type info = retrieve(L , 0);
    return info;
}