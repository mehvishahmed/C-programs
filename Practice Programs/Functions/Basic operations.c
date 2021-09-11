#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
float div(int a, int b)
{
    return a/b;
}

int main()
{
    int a,b,w,x,y;
    float z;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    w=add(a,b);
    x=sub(a,b);
    y=mul(a,b);
    z=div(a,b);
    printf("ADDITION: %d + %d = %d\n", a, b, w);
    printf("SUBTRACTION: %d - %d = %d\n", a, b, x);
    printf("MULTIPLICATION: %d * %d = %d\n", a, b, y);
    printf("DIVISION: %d / %d = %d\n", a, b, z);
    return 0;
}
