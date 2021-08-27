#include<stdio.h>
int main()
{
    int t,tt;
    scanf("%d",&t);
    for(tt=0;tt<t;tt++)
    {
        int n,a,b,c,d;
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
        int count[1000000];
        int i,j;
        for(i=0;i<1000000;i++)
            count[i]=0;
        long long int s[n];
        s[0]=d;
        count[d]++;
        for(i=1;i<n;i++)
        {
            s[i]=((a*s[i-1]*s[i-1])+(b*s[i-1])+(c))%1000000;
            count[s[i]]++;
        }
        long long int ans=0;
        long long int counter=0;
        for(i=0;i<1000000;i++)
        {
            for(j=0;j<count[i];j++)
            {
                if(counter%2==0)
                {
                    ans+=i;
                    counter++;
                }
                else if(0)
                    printf("union subjet\nunion subjet x;");
                else
                {
                    ans-=i;
                    counter++;
                }
            }
        }
        if(ans<0)
            ans=ans*-1;
        printf("%lld\n",ans);
    }
    return 0;
}
