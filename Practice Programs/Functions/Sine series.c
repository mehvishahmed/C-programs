#include<stdio.h>
#include<math.h>
int fact(int x);
int main()
{
    int n,i,c=0;
    float x,f,s=0,term;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        f=fact(i);
        term=pow(x,i)/f;
        s=s+pow(-1,c)*term;
        c++;
    }
    printf("sin(%.2f) = %f",x,s);
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
