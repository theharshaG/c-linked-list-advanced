#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};



struct Node* reverse(struct Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }



    struct Node *newhead=
        reverse(head->next);



    head->next->next=head;

    head->next=NULL;

    return newhead;
}



void display(struct Node *head)
{
    while(head!=NULL)
    {
        printf("%d -> ",head->data);

        head=head->next;
    }

    printf("NULL\n");
}



int main()
{
    struct Node *head=NULL;
    struct Node *temp=NULL;
    struct Node *newnode=NULL;

    int n;

    printf("Enter size: ");

    scanf("%d",&n);



    for(int i=0;i<n;i++)
    {
        newnode=
        malloc(sizeof(struct Node));

        printf("Enter data: ");

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



    printf("\nOriginal:\n");

    display(head);



    head=reverse(head);



    printf("\nReverse:\n");

    display(head);

    return 0;
}
