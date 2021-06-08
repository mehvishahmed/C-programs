#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    (n%8==1 || n%8==2 || n%8==3)? printf("%d",n+3):printf("%d",n-3);
    if (n%8%3==1)
        printf("LB");
    if (n%8%3==2)
        printf("MB");
    if (n%8%3==0)
        printf("UB");
    if(n%8==0)
        printf("%dSL",n-1);
    else if (n%8==7)
        printf("%dSU",n+1);
    return 0;
}
