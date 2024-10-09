#ifndef INCLUDED_H_QUEUE
#define INCLUDED_H_QUEUE
#define MAX  1000000
typedef int Type;

typedef struct QUEUE
{
    int Head;
    int Tail;
    int size;
    Type *arr;
}queue;

void Create_Queue(queue *q);
int isEmpty(queue q);
int isFull(queue q);
void enqueue(queue *q , Type item);
void dequeue(queue *q);
Type peek(queue q);
int size_queue(queue q);
void print_queue(queue q);
void copy_queue(queue q1 , queue *q2);
void clear_queue(queue *q);

#endif // !INCLUDED_H_QUEUE