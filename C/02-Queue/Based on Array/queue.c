#include<stdio.h>
#include <stdlib.h>
#include "queue.h"

void Create_Queue(queue *q)
{
    q->Head = 0;
    q->Tail = MAX - 1;
    q->size = 0;
    q->arr = (Type*)(malloc(MAX * sizeof(Type)));
}

int isEmpty(queue q)
{
    return q.size == 0;
}

int isFull(queue q)
{
    return q.size == MAX;
}

void enqueue(queue *q , Type item)
{
    if(isFull(*q))
    {
        printf("Queue is OverFlow : can't push element !!\n");
        return ;
    }
    else
    {
        q->Tail = (q->Tail + 1) % MAX;
        q->arr[q->Tail] = item;
        q->size++;
    }
}


void dequeue(queue *q)
{
    if(isEmpty(*q))
    {
        printf("Queue is UnderFlow : can't remove element !!\n");
        return ;
    }
    else
    {
        q->Head = (q->Head + 1) % MAX;
        q->size--;
    }
}

Type peek(queue q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    return q.arr[q.Head];
}


int size_queue(queue q)
{
    return q.size;
}

void print_queue(queue q)
{
    int head = q.Head;
    for(int i = 0 ; i < q.size ;i++)
    {
        printf("%d " , q.arr[head]);
        head++;
    }
    printf("\n");
}

void copy_queue(queue q1 , queue *q2)
{
    while(q1.size)
    {
        enqueue(q2 , peek(q1));
        dequeue(&q1);
    }
}

void clear_queue(queue *q)
{
    free(q->arr);
    q->size = 0;
    q->Head = 0;
    q->Tail = MAX - 1;
    return;
}