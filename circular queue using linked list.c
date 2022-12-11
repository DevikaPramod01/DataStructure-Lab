#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *temp;
struct node *front, *rear;
void enqueue()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    if (front==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=front;
    }
    else
    {
        rear->next=newnode;
        newnode->next=front;
        rear=newnode;
    }
}
void dequeue()
{
    if(front==NULL)
    printf("queue is empty");
    else if(front==rear)
    {
        temp=front;
        front=rear=NULL;
        free(temp);
    }
    else
    {
        temp=front;
        front=front->next;
        rear->next=front;
        free(temp);
        
    }
}
void display()
{
    temp=front;
    while(temp->next!=front)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void main()
{
    front=rear=NULL;
    int choice;
    while(choice!=4)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
        printf("\nenter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
        
    }
}
