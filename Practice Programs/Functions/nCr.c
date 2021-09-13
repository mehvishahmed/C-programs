#include<stdio.h>
int fact(int);
int main()
{
    int n,r,n1,n2,n3,ncr;
    printf("NCR CALCULATION\n");
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    n1=fact(n);
    n2=fact(r);
    n3=fact(n-r);
    ncr=n1/(n2*n3);
    printf("%dC%d = %d\n",n,r,ncr);
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
