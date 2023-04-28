#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top;
    int* ptr;
}stack;

int isfull(stack* p){
    if (p->top==p->size-1)
    {
        return 1;
    }
    return 0;
}

int isempty(stack* p){
    if (p->top==-1)
    {
        return 1;
    }
    return 0;
}

int push(stack* p,int val){
    if (isfull(p))
    {
        printf("no more room in stack");
    }
    else{
    p->top++;
    p->ptr[p->top] = val;
    return p->ptr[p->top];
    }
}

int pop(stack* p){
    if (isempty(p))
    {
        printf("stack is empty");
    }
    else
    {
    int val = p->ptr[p->top--];
    printf("%d\n",val);
    return val;
    }
}

int peek(stack* p,int index){
    int val = p->top-index+1;
    if(val<0){
        printf("invalid position");
    }
    else{
    printf("%d\n",p->ptr[val]);
    return p->ptr[val];
    }
}

int stackbottom(stack* p){
    printf("%d\n",p->ptr[0]);
    return p->ptr[0];
}

int stacktop(stack* p){
    printf("%d\n",p->ptr[p->top]);
    return p->ptr[p->top];
}

int main()
{
    stack p;
    stack* s=&p;
    s->size = 20;
    s->top = -1;
    s->ptr = (int*)malloc(sizeof(int)*s->size);
    push(s,6);
    push(s,24);
    push(s,12);
    push(s,0);
    push(s,9);
    push(s,8);
    push(s,7);
    push(s,6);
    push(s,5);
    push(s,4);
    for (int i = 1; i < s->top+2; i++)
    {
        printf("the element at %d is ",s->top-i+1);
        peek(s,i);
    }
    stackbottom(s);
    stacktop(s);
    return 0;
}
