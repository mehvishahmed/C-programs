#include<stdio.h>
#include<math.h>
int fact(int x);
float sine(float x,int n);
void main()
{
    int n;
    float x,sin;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the limit : ");
    scanf("%d",&n);
    sin=sine(x,n);
    printf("sin(%.2f) = %f",x,sin);
}
float sine(float x,int n)
{
    int c=0,i;
    float s=0,f,term;
    for(i=1;i<=n;i=i+2)
    {
        f=fact(i);
        term=pow(x,i)/f;
        s=s+pow(-1,c)*term;
        c++;
    }
    return s;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
