#ifndef INCLUDED_H_DOUBLE_LINKED
#define INCLUDED_H_DOUBLE_LINKED
#define MAX 1000000
typedef int Type;

typedef struct Linked_List
{
    int size;
    int *arr;
}List;

void Creat_List(List *L);
int isEmpty_List(List L);
int isFull_List(List L);
void insert(List *L , Type data , int pos);
Type retrieve(List *L , int pos);
int size_List(List L);
void clear(List *L); 
void push_back(List *L , Type data);
void push_front(List *L , Type data);
Type pop_back(List *L);
Type pop_front(List *L);


#endif // !INCLUDED_H_DOUBLE_LINKED