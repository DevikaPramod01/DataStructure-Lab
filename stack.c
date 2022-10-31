#include<stdio.h>
#include<stdlib.h>
int stack[15],choice,n,i,x,top=-1;
char ch;
void push()
{
if(top>=n-1)
{
printf("stack overflow");
}
else
{
printf("enter the value to push\n");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("stack underflow");
}
else
{
printf("the popped element is %d\n",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("the element in stack\n");
for(i=top;i>=0;i--)
printf("\n %d",stack[i]);
}
else
{
printf("stack empty");
}
}
void main()
{
printf("enter the size of stack\n");
scanf("%d",&n);
printf("\n 1.push \n2.pop\n 3.display\n 4.quit\n");
do
{
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
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


