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
void delete_end()
{
    struct node*temp,*temp1;
    if(start==NULL)
    {
        printf("empty");
    }
    else
    {
       temp=start;
       temp1=start;
       //traverse to the last node
       while(temp->link!=NULL)
       {
        temp1=temp;
        temp=temp->link;
       }
       if(temp==start)
       {
        start=NULL;
       }
       else
       {
         //disconnect link of last and sec last node
         temp1->link=NULL;
       }
    free(temp);
    printf("after deletion:\n");
}
}
void main()
{
    create();
    display();
    delete_end();
    display();
}
