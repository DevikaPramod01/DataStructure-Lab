#include<stdio.h>
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
void insertpos()
{
    struct node*newnode,*temp;  
    int pos,count=0;     
    printf("enter the position to insert node:\n");
    scanf("%d",&pos);
    if(pos>count)
	{
	   printf("invalid position");
	}
    else
        {
    printf("enter the item:\n");
    scanf("%d",&newnode->data);
    temp=start;
    while(count!=pos)
	{
		temp=temp->link;
                count++;
	}
		newnode->link=temp->link;
		temp->link=newnode;
}
void main()
{
	create();
	display();
	insertpos();
	display();
}
