#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n;

    struct Node *head=NULL;
    struct Node *temp=NULL;
    struct Node *newnode=NULL;

    printf("Enter number of nodes: ");
    scanf("%d",&n);



    for(int i=0;i<n;i++)
    {
        newnode=malloc(sizeof(struct Node));

        printf("Enter data: ");

        scanf("%d",&newnode->data);

        newnode->next=NULL;



        if(head==NULL)
        {
            head=newnode;

            temp=newnode;
        }

        else
        {
            temp->next=newnode;

            temp=newnode;
        }
    }



    struct Node *prev=NULL;

    struct Node *curr=head;

    struct Node *next=NULL;



    while(curr!=NULL)
    {
        next=curr->next;

        curr->next=prev;

        prev=curr;

        curr=next;
    }



    head=prev;



    printf("\nReversed List:\n");

    temp=head;

    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);

        temp=temp->next;
    }

    printf("NULL");



    temp=head;

    while(temp!=NULL)
    {
        struct Node *del=temp;

        temp=temp->next;

        free(del);
    }

    return 0;
}
