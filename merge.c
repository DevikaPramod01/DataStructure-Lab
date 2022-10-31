#include<stdio.h>
int main()
{
int arr1[4],arr2[3],i,j,merge[10];
printf("enter the elements in the first array");
for(i=0;i<=4;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];  //placing elements to merge
}
j=i;     // same index 
printf("enter the elements in the second array");
for(i=0;i<=3;i++)
{
scanf("%d",&arr2[i]);
merge[j]=arr2[i];    //to merge with i
j++;
}
printf("the merged array is");
 for(i=0;i<j;i++)
printf("%d\t",merge[i]);
}

