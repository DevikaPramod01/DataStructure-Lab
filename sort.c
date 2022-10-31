#include<stdio.h>
int main()
{
int a[10],i,j,temp=0;
printf("enter the array elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)  //taking a[0]
{
for(j=i+1;j<10;j++)   //taking a[1]
{
if(a[i]>a[j])    //comparing
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("the sorted array is");
for(i=0;i<10;i++)
printf("%d \t",a[i]);
}
 

