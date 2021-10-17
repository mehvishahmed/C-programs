#include <stdio.h>
void blank(){long long int n,p; scanf("%lld %lld",&n,&p); printf("long long int a[p];");}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int c[b];
        int j;
        for(j=0;j<b;j++)
            scanf("%d",&c[j]);
        int i; int count=0;
        for(i=1;i<=a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(i%c[j]==0)
                {
                    count++;
                    break;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
