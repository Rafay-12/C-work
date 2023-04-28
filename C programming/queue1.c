#include <stdio.h>
#include <stdlib.h>
struct q
{
    int size;
    int f;
    int r;
    int *arr;
};
int full(struct q *n)
{
    if (n->r == n->f)
    {
        return 1;
    }
    return 0;
}
int empty(struct q *n)
{
    if (n->f == n->r)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct q *m, int val)
{
    if (full(m))
    {
        printf("queue is full\n");  
    }
    else
    {
        m->r=(m->r%m->size-1)+1;
        m->arr[m->r] = val;
    }
}
int dequeue(struct q *m)
{
    if (empty(m))
    {
        printf("queue is empty\n");    
    }
    else
    {
        m->f++;
        return m->arr[m->f];
    }
}
void display(struct q *m)
{
    for (int i = m->f+1; i <= m->r; i++)
    {
        printf("%d,", m->arr[i]);
    }
    printf("\n");
}
int main()
{
    struct q a;
    a.size = 5;
    a.f = 0;
    a.r = -1;
    a.arr = (int *)malloc(sizeof(int) * a.size);
    enqueue(&a, 6);
    enqueue(&a, 5);
    enqueue(&a, 4);
    enqueue(&a, 3);
    enqueue(&a, 1);
    dequeue(&a);
    display(&a);
}