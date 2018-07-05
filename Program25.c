//C program for Find middle element in Linked list....
//https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *CreateNode(int data)
{
    struct Node *temp;
    temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void PrintList(struct Node *head)
{
    if(head==NULL)
        return;
    while(head!=NULL)
    {
        printf("%d-->",head->data);
        head=head->next;
    }
}

struct Node *MiddleOfList(struct Node *head)
{
    if (head==NULL)
        return head;
    struct Node *p=head;
    struct Node *s=head;
    while( s!=NULL && s->next!=NULL)
    {
        s=s->next->next;
        p=p->next;
    }
   return p;
}

int main()
{
    struct Node *head=CreateNode(5);
    struct Node *n1=CreateNode(6);
    head->next=n1;
    struct Node *n2=CreateNode(7);
    n1->next=n2;
    struct Node *n3=CreateNode(8);
    n2->next=n3;
    struct Node *n4=CreateNode(9);
    n3->next=n4;
    PrintList(head);
    struct Node *mid;
    mid=MiddleOfList(head);
    printf("\nmiddle node data is %d",mid->data);
    return 0;
}
