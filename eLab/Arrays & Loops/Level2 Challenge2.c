#include <stdio.h>
int main()
{
    int t,n,a[10002],b[10002];
    int i, count=0;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        for(i=0;i<n;i++)
        {
            if((a[i]-a[i-1])>=b[i])
                count++;
        }
        printf("%d\n",count);
        count=0;
        t--;
    }
	return 0;
}
