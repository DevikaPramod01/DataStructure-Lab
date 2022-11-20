#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}
*head=NULL;
void create()
{
    struct node*newnode,*current;
    int i,n;
    printf("how many nodes do you want to create \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            current=newnode;

        }  
        else
        {
            current->next=newnode;
            current=newnode;       
        }
    }
}
void display()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("linked list is %d\n",temp->data);
        temp=temp->next;
    }
}
void insert_beginning()
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data you want to insert at beginning\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void main()
{
    create();
    display();
    insert_beginning();
    display();
}
