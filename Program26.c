//C program for  reversing of nodes in a Linked List....

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
        printf("No element");
    while(head!=NULL)
    {
        printf("%d-->",head->data);
        head=head->next;
    }
    printf("\n");
}

struct Node *Reverse(struct Node *head)
{
    if (head==NULL)
        return head;
    struct Node *p=head;
    struct Node *q=NULL;
    struct Node *r;
    while(p!=NULL)
    {
    	r=p->next;
        p->next=q;
        q=p;
        p=r;       
    }
   return q;
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
    head=Reverse(head);
    PrintList(head);
    
    return 0;
}
