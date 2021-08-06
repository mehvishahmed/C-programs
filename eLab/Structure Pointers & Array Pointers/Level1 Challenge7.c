#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*q,x;
    scanf("%d",&n);
    q=(int*)calloc(n+1, sizeof(int));
    printf("1 ");
    int p=n,i;
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        q[x]=1;
        while(q[p]==1)p--;
        printf("%d ",i-n+p+1);
    }
    return 0;
}
