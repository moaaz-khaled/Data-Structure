#include <stdio.h>
#include <stdlib.h>
#include "queue.c"

int main(void)
{
    queue q;
    Create_Queue(&q);
    enqueue(&q , 5);
    enqueue(&q , 50);
    enqueue(&q , 53);
    dequeue(&q);
    printf("peek element is : %d\n",peek(q));
    queue q2;
    Create_Queue(&q2);
    copy_queue(q , &q2);
    printf("size of queue2 after copy is : %d\n", size_queue(q2));
    enqueue(&q2 , 503);
    enqueue(&q2 , 530);
    enqueue(&q2 , 535);
    printf("size of queue2 is : %d\n", size_queue(q2));
    enqueue(&q , 50);
    enqueue(&q , 500);
    enqueue(&q , 5000);
    printf("Queue 1 is : ");
    print_queue(q);
    printf("Queue 2 is : ");
    print_queue(q2);
    return 0;
}