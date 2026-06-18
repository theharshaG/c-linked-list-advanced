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

    printf("Enter size:");

    scanf("%d",&n);



    for(int i=0;i<n;i++)
    {
        newnode=
        malloc(sizeof(struct Node));

        scanf("%d",
        &newnode->data);

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



    struct Node *slow=head;

    struct Node *fast=head;



    while(
        fast!=NULL
        &&
        fast->next!=NULL
    )
    {
        slow=slow->next;

        fast=
        fast->next->next;
    }



    printf("Middle=%d",slow->data);

}
