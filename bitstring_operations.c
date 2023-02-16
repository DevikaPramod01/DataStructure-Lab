#include <stdio.h>
int S[10],B[10],U[10],SE[10],I[10],D[10],C[10],P[10],n,m;
void set()
{
    printf("Enter size of first");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&S[i]);
    }
    printf("Enter size of second");
    scanf("%d",&m);
    printf("Enter the elements");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&B[j]);
    }
}
void _union()
{
    if(m!=n)
    {
        printf("Not possible);");
    }
    else
    {
      for(int i=0;i<n;i++)
      {
          U[i]=S[i]|B[i];
      }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",U[i]);
    }
}
void intersection()
{
    if(m!=n)
    {
        printf("Not possible");
    }
    else
    {
      for(int i=0;i<n;i++)
      {
          I[i]=S[i]&B[i];
      }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",I[i]);
    }
}
void difference()
{
    for(int i=0;i<n;i++)
    {
        P[i]=!B[i];
    }
    for(int i=0;i<n;i++)
    {
        D[i]=S[i]&P[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",D[i]);
    }
}
void compliment()
{
    for(int i=0;i<n;i++)
    {
        C[i]=!S[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",C[i]);
    }
}
void display()
{
    printf("SETS\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",S[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",B[i]);
    }
}
void main()
{
    set();
    display();
    printf("\nUnion\n");
    _union();
    printf("\nIntersection\n");
    intersection();
    printf("\nDifference\n");
    difference();
    printf("\nCompliment\n");
    compliment();

}
