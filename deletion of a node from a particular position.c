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
void delete_pos()
{
    struct node*temp,*nextnode;
    int i=1,pos;
    temp=start;
    printf("enter the position");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }
    nextnode=temp->link;
    temp->link=nextnode->link;
    free(nextnode);
}
void main()
{
    void create();
    void display();
    void delete_pos();
    void display();
}
