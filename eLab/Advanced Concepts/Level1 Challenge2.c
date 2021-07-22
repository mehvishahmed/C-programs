#include <stdio.h>
long long p[1000005][2];
int main()
{
    int t;
    long n,h,i,a,b;
    register int c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld %ld",&n,&h);
        for(i=0;i<n;i++)
        p[i][0]=p[i][1]=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld",&a,&b);
            p[a][0]++;
            p[b][1]++;
        }
        for(i=0;i<n;i++)
        p[i+1][0]=p[i+1][0]+(p[i][0]-p[i][1]);
        for(i=0;i<n;i++)
        p[i][0]+=p[i-1][0];
        c=p[h-1][0];
        for(i=0;i<n;i++)
        {
            if(c<p[i][0]-p[i-h][0])
            c=p[i][0]-p[i-h][0];
        }
        printf("%lld\n",(long long)h*n-c);
    }
	return 0;
}
