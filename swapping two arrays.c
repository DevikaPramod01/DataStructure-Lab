#include <stdio.h>
int main()
{
int arr[10],arr1[10],n1,n2,arr3[10],i;
printf("enter array1 size ");
scanf("%d",&n1);
printf("enter array1 elements: ");
for(i=0;i<n1;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter array2 size ");
scanf("%d",&n2);
printf("enter array2 elements: ");
for(i=0;i<n2;i++)
{
    scanf("%d",&arr1[i]);
}
printf("\n before swapping :");
printf("\narray1: ");
for(i=0;i<n1;i++)
{
    printf("%d\t",arr[i]);
}
printf("\narray2: ");
for(i=0;i<n2;i++)
{
    printf("%d\t",arr1[i]);
}
for(i=0;i<10;i++)
{
arr3[i]=arr[i];
arr[i]=arr1[i];
arr1[i]=arr3[i];
}
printf("\nafter swapping:");
printf("\narray1: ");
for(i=0;i<n1;i++)
{
    printf("%d\t",arr[i]);
}
printf("\narray2: ");
for(i=0;i<n2;i++)
{
    printf("%d\t",arr1[i]);
}
}
