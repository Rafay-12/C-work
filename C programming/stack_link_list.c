#include<stdio.h>
#include<stdlib.h>
struct stack{
    char data;
    struct stack* next;
};
struct stack* top = NULL;
char push(struct stack* tp,char a){
    struct stack* p = (struct stack*)malloc(sizeof(struct stack));
    p->data = a;
    p->next = NULL;
    tp = p;
    return tp->data;
}
char peek(struct stack* tp,int val){
    for (int i = 0; i < val-1; i++)
    {
        tp = tp->next;
    }
    return tp->data;
}
char pop(struct stack* tp){
    struct stack* p = tp;
    tp = p->next;
    char a = p->data;
    free(p);
    return a;
}
int main(){
    push(top,'b');
    push(top,'a');
    char c = peek(top,1);
    pop(top);
    printf("hello");
}