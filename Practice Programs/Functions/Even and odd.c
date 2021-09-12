#include<stdio.h>
void check(); //Function prototype
int main()
{
    check(); //Function call
    return 0;
}
void check() //Function definition
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
      printf("EVEN");
    else
      printf("ODD");
}
