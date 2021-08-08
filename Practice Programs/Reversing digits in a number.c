#include <stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter the digit to be reversed: ");
    scanf("%d",&n);
    do
    {
        r=n%10;
        n/=10;
        sum=(sum*10)+r;
    }
    while(n>0);
    printf("%d",sum);
    return 0;
}
