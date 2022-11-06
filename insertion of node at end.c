#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
}
*start=NULL;
void create()
{
    struct node*newnode,*current;
    int i,n;
    printf("how many nodes do you want to create\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
        {
            current->link=newnode;
            current=newnode;
        }
    }
}
void display()
{
    struct node*temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("linked list is %d\n",temp->data);
        temp=temp->link;
    }
}
void insert_end()
{
    struct node*temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert at end\n");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    temp=start;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newnode;
}
void main()
{
create();
display();
insert_end();
display();
}
