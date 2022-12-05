#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int data;  
struct node *link;  
};  
struct node *head;   
void main ()  
{  
    int choice=0;     
    while(choice != 4)  
    {   
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:push();  
                break;   
            case 2:pop();  
                break; 
            case 3:display();  
                break;
            case 4:printf("Exit");  
                break;  
            default:  
           printf("Please Enter valid choice ");       
    } 
}  
}  
void push ()  
{  
    int data;  
    struct node *temp = (struct node*)malloc(sizeof(struct node));   
    if(temp == NULL)  
    {  
        printf("stack full");   
    }  
    else   
    {  
        printf("Enter the data");  
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
        printf("%d pushed",temp->data = data);  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *temp;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->data;  
        temp = head;  
        head = head->link;  
        free(temp);  
        printf("%d popped",item = head->data);  
          
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
        printf("Stack elements are: \n");  
        while(temp!=NULL)  
        {  
            printf("%d\n",temp->data);  
            temp = temp->link;  
        }  
    }  
} 
