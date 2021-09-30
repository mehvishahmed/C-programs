#include <stdio.h>
int main()
{
    int n,i,j;
    long long int a[10000],temp;
    long long int sum1=0,med,median,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum1+=a[i];
    }
    med=sum1/n;
    for(i=0;i<n;i++)
        a[i]-=med;
    for(i=0;i<n;i++)
        a[i]+=a[i-1];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(n%2!=0)
        median=a[n/2];
    else
        median=(a[n/2]+a[n/2-1])/2;
    for(i=0;i<n;i++)
    {
        a[i]-=median;
        if(a[i]<0)
            a[i]*=-1;
        ans+=a[i];
    }
    printf("%lld",ans);
	return 0;
}
