#include <stdio.h>
int main()
{
    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    if (a>=k)
        printf("%d %d",a-k,b);
    else if(a<=k)
        printf("0 %d",b-(k-a));
    else printf("%d %d",a,b-k);
    return 0;
}
