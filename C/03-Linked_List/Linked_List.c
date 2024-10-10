#include<stdio.h>
#include<stdlib.h>
#include "Linked_List.h"

void Creat_List(List *L)
{
    L->head = NULL;
    L->size = 0;
}

int isEmpty_List(List L)
{
    return L.size == 0;
}

int isFull_List(List L)
{
    return 0;
}

void insert(List *L , Type data , int pos)
{
    node *p = (node*)(malloc(sizeof(node)));
    p->info = data;
    if(pos == 0)
    {
        p->prev = NULL;
        p->next = L->head;
        if(L->head != NULL)
            L->head->prev = p;
        L->head = p;
    }
    else
    {
        node *temp = L->head;
        for(int i = 0 ; i < pos - 1 && temp != NULL;i++)
        {
            temp = temp->next;
        }
        p->next = temp->next;
        p->prev = temp;
        if(temp->next != NULL)
        {
            temp->next->prev = p;
        }
        temp->next = p;
    }
    L->size++;
}


Type retrieve(List *L , int pos)
{
    Type data;
    if(L->size == 0)
    {
        printf("List is Empty : can't retrieve\n");
        return -1;
    }
    node *temp1 = L->head;
    for(int i = 0 ; i < pos && temp1 != NULL ;i++)
    {
        temp1 = temp1->next;
    }
    if(temp1 == NULL)
    {
        printf("out of Bound Error !!\n");
        return -1;
    }
    if(temp1->prev != NULL)
    {
        temp1->prev->next = temp1->next;
        if(temp1->next != NULL)
        {
            temp1->next->prev = temp1->prev;
        }
    }
    else
    {
        L->head = temp1->next;
        if(L->head != NULL)
        {
            L->head->prev = NULL;
        }
    }
    data = temp1->info;
    free(temp1);
    L->size--;
    return data;
}

int size_List(List L)
{
    return L.size;
}

void clear(List *L)
{
    while(L->size)
    {
        retrieve(L , 0);
    }
}