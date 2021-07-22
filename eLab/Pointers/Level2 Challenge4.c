#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
    long long int *A,*B;
    long long int n,m;
    int i,k1=0,k2=0,u=0,ans=0;
    scanf("%lld",&n);
    A=(long long int *)malloc(sizeof(long long int)*n);
    for(i=0;i<n;i++)
        scanf("%lld",A+i);
    scanf("%lld",&m);
    B = (long long int *)malloc(sizeof(long long int)*m);
    for(i=0;i<m;i++)
        scanf("%lld",B+i);
    bool f=false;
    for(i=0;i<n;i++)
    {
        k1+=*(A+i);
        while(k2<k1 && u<m) k2+= *(B+u++);
            if(k1==k2){
                k1=0;
                k2=0;
                ans++;
                continue;
        }
        if(u>=m)
        {
            f=true;
            break;
        }
    }
    if(!f&&u>=m)
        printf("%d\n",ans);
    else printf("-1\n");
	return 0;
}
