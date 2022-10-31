
#include<stdio.h>
int main()
{
int arr1[3],arr2[4],i,k,arr3[10];
printf("enter the first array elements");
for(i=0;i<=3;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the second array elements");
for(i=0;i<=4;i++)
{
scanf("%d",&arr2[i]);
}
for(i=0,k=0;i<=3;i++,k+=2)      //the merging arrays in alternate poistions
arr3[k]=arr1[i];
for(i=0,k=1;i<=4;i++,k+=2)
arr3[k]=arr2[i];
printf("the alternatively merged arrays are");
for(i=0;i<=10;i++)
printf("%d\n",arr3[i]);
}

