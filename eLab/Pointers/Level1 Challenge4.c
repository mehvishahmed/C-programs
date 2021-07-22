#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[300005];
    while(~scanf("%d",&n))
    {
        int ans = 1, *q, j=n;
        q = (int*)calloc(n+1, sizeof(int));
        printf("1");
        while(n--)
        {
            scanf("%d",q+n), a[*(q+n)]=1,ans++;
        while(a[j])
        j--, ans--;
        printf(" %d",ans);}
    }
	return 0;}
