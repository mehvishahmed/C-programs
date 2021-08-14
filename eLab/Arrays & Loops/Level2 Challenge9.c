#include <stdio.h>
int main()
{
    int i,t,a[100000],b[100000],j=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        b[i]=0;
        b[j++]=a[n-1];
        for(i=n-1; i>=0;i--)
            if(a[i]>=b[j-1])
            {
                b[j] = a[i];
                j++;
            }
            for(j=j-1;j>0;j--)
                printf("%d ",b[j]);
        printf("\n");
    }
	return 0;
}
