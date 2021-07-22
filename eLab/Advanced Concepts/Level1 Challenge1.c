#include <stdio.h>
#include <math.h>
int main()
{
    int t,n,i,k,f,c,min;
    scanf("%d",&t);
    long long j,l;
    for(;t>0;t--)
    {
        scanf("%d %d",&n,&k);
        min=k;
        char a[n][k+1];
        long long s[n];
        for(i=0;i<n;i++)
        {
            s[i]=0;
            scanf("%s",&a[i][0]);
            for(j=0;j<k;j++)
            {
                if(a[i][j] == '1')
                s[i]=s[i]+(1<<(k-1-j));
            }
        }
        for(j=1;j<pow(2,k);j++)
        {
            f=0;
            for(i=0;i<n;i++)
            {
                if((s[i] & j) == 0)
                {
                    f++;
                    break;
                }
            }
            if(f==0)
            {
                l=j;c=0;
                while(l!=0)
                {
                    l=l&(l-1);
                    c++;
                }
                if(c<min)
                {
                    min=c;
                }
            }
        }
        printf("%d\n",min);
    }

	return 0;
}
