#include <stdio.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d %d %d",&a,&b,&n);
    c=a*2*(n+1);
    if(n%2!=0 && n<=10)
        d=b*(n+1);
    else d=b*c/a;
    (c>d)?printf("%d",c/d):printf("%d",d/c);
    return 0;
}
