#include<stdio.h>
#include<stdlib.h>
int queue[10],rear=0,front=0,item,choice,n,i;
char ch;
void insertq()
{
if(rear>=n)
{
printf("\n the queue is full");
}
else
{
printf("enter the value to be inserted\n");
scanf("%d",&item);
rear++;
queue[rear]=item;
}
}
void deleteq()
{
if(front==rear)
{
printf("the queue is empty");
}
else
{
x=queue[front+1];
printf("the deleted element is %d\n",queue[front+1]);
front++;
}
}
void display()
{
if(front==rear)
{
printf("the queue is empty");
}
else
{
for(i=front+1;i<=rear;i++)
{
printf("the queue is %d\n",queue[i]);
}
}
}
void main()
{
printf("enter the size of the queue\n");
scanf("%d",&n);
printf("\n 1.insert\n 2.delete\n 3.display\n4.quit\n");
do
{
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:insertq();
break;
case 2:deleteq();
break;
case 3:display();
break;
default:
exit(0);
}
printf("\n do you want to continue y/n\n");
scanf("%s",&ch);
}
while(ch=='y'||ch=='Y');
}
