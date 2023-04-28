#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *deletionatfirst(struct node *head)
{
    struct node *p = head;
    head = p->next;
    free(p);
    return head;
}
struct node *deletioninbetween(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int i = 0;
    while (i < index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}
 
struct node *deletionatend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct node* deletionofvalue(struct node* head,int value){
    struct node *p = head;
    struct node *q = head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data==value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d, ", head->data);
        head = head->next;
    }
}
int main()
{
    struct node *head = (struct node *)(malloc(sizeof(struct node)));
    struct node *second = (struct node *)(malloc(sizeof(struct node)));
    struct node *third = (struct node *)(malloc(sizeof(struct node)));
    struct node *fourth = (struct node *)(malloc(sizeof(struct node)));
    head->data = 5;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 11;
    fourth->next = NULL;
    // head = deletionatfirst(head);
    // head = deletioninbetween(head, 2);
    // head = deletionatend(head);
    head = deletionofvalue(head,7);
    display(head);
}