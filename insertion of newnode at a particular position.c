#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
}
*start=NULL;
int count = 0;
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
	count += n;
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
void insert_pos()
{
    int pos,i=1;
    struct node*temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    printf("enter the position to insert");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("invalid position");
    }
    else
    {
        temp=start;
        while(i<pos)
        {
            temp=temp->link;
            i++;
        }
    newnode->link=temp->link;
    temp->link=newnode;
    }
}        

void main()
{
    create();
    display();
    insert_pos();
    display();
}
