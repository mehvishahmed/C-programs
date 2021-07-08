#include <stdio.h>
int sumd(int n)
{
    int k,sum=0;
    scanf("%d", &k);
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum*k;
}
int superd(int num)
{
    int n=0;
    return (num%9==0)? n=9:num%9;
}
int main()
{
    int num;
    scanf("%d", &num);
    num = sumd(num);
    printf("%d", superd(num));
    return 0;
}
