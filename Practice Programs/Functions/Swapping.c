#include<stdio.h>
void swap(int,int);
int main()
{
    int a=5,b=10;
    printf("a = %d, b = %d\n",a,b);
    swap(a,b);
    printf("a = %d, b = %d\n",a,b);
    return 0;
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("a = %d, b = %d\n",a,b);
}
