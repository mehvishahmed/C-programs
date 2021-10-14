#include <stdio.h>
#include<stdlib.h>
int cmpfunc(const void * a, const void * b) 
{
   return (*(int *)b - *(int *)a);
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int p[n],count=0;
        for(j=0;j<n;j++)
            scanf("%lld",&p[j]);
        qsort(p, n, sizeof(long long int), cmpfunc);
        for( i=0;i<n;i++){
            if(p[i]-i-1<0)
                p[i]=0;
            else
                p[i]=p[i]-i;
            count=count+p[i];
        }
        printf("%lld\n",count%1000000007);
    }
	return 0;
}
