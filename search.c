#include <stdio.h>
int main()
{
int arr[10],n,i,item;
printf("enter array size ");
scanf("%d",&n);
printf("array elements: ");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("the array is ");
for(i=0;i<n;i++)
{
    printf("%d \t",arr[i]);
}
int flag=0;
printf("\n enter a number to search from the array ");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(arr[i]==item)
{
    printf("Yes  searched number present in the array");
    flag=1;
}
}
if(flag==0)
    printf("No searched number present in the array");
}
