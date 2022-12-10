

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
}
*start=NULL;
int count=0;
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
    count+=n;
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
void deletepos()
{
     struct node *temp, *temp1;  
        int loc,i; 
        printf("enter position to delete");  
        scanf("%d",&loc);  
        temp=start;  
        for(i=0;i<loc;i++)  
        {  
            temp1 = temp;       
            temp = temp->link;   
            if(temp == NULL)  
            {  
                printf("\n invalid position");  
            }  
        }  
        temp1 ->link = temp ->link;  
        free(temp);  
        printf("after deletion /n");  
}
void main()
{
    create();
    display();
    deletepos();
    display();
}
