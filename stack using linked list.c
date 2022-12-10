#include <stdio.h>  
#include<conio.h>
#include <stdlib.h>   
struct node   
{  
int data;  
struct node *link;  
};  
struct node *head;   
void main ()  
{  
void push();  
void pop();  
void display();
    int choice=0;     
    while(choice != 4)  
    {   
        printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");  
        printf("Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:push();  
                break;   
            case 2:pop();  
                break; 
            case 3:display();  
                break;
            case 4:printf("Exit\n");  
                break;  
            default:  
           printf("\nPlease Enter valid choice\n ");       
    } 
}  
}  
void push ()  
{  
    int data;  
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));   
    if(temp == NULL)  
    {  
        printf("\nstack full");   
    }  
    else   
    {  
        printf("\nEnter the data ");  
        scanf("%d",&data);  
        if(head==NULL)  
        {         
            temp->data = data;  
            temp-> link = NULL;  
            head=temp;  
        }   
        else   
        {  
            temp->data = data;  
            temp->link= head;  
            head=temp;  
               
        }  
        printf("\n %d pushed",temp->data = data);  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *temp;  
    if (head == NULL)  
    {  
        printf("\n Underflow");  
    }  
    else  
    {  
        item = head->data;  
        temp = head;  
        head = head->link;  
        free(temp);  
        printf("\n %d popped",item = head->data);  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *temp;  
    temp=head;  
    if(temp == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("\n Stack elements are: \n");  
        while(temp!=NULL)  
        {  
            printf("%d\n",temp->data);  
            temp = temp->link;  
        }  
    }  
} 

