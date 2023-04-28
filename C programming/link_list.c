#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;   
};
struct node* insertionatfirst(struct node* head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct node* insertion_in_between(struct node* head,int index,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node* p = head;
    int i = 0;
    while (i<index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}
struct node* insertionatend(struct node* head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node* p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
void insertionafternode(struct node* given,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next=given->next;
    given->next = ptr;
}
void display(struct node* ptr){
   while (ptr!=NULL)
    {
        printf("%d, ",ptr->data);
        ptr = ptr->next;
    }
    
}
int main(){
    struct node* head = (struct node*)(malloc(sizeof(struct node)));
    struct node* second = (struct node*)(malloc(sizeof(struct node)));
    struct node* third = (struct node*)(malloc(sizeof(struct node)));
    head->data = 5;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 9;
    third->next = NULL;
    head = insertionatfirst(head,11);
    head = insertion_in_between(head,2,22);
    head = insertionatend(head,5);
    insertionafternode(second,8);
    display(head);
}