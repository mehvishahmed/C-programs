#include <stdio.h>
#include <string.h>
union edge{
    int t;
};
int main (void)
{
    union edge g;
    scanf("%d",&g.t);
    while(g.t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n],i,x,y,vertex,ans=3,j,v1,v2;
        memset(a,0,n*sizeof(int));
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&x,&y);
            if(i==0)
            {
                v1=x-1;v2=y-1;
            }
            a[x-1]++;
            a[y-1]++;
        }
        if(m%2==0)
            ans=1;
        else
        {
            for(j=0;j<n;j++)
            {
                if(a[j]%2==1)
                {
                    ans=2;
                    vertex=j;
                    break;
                }
            }
        }
        printf("%d\n",ans);
        if(ans==1)
        {
            for(i=0;i<n;i++)
            printf("1 ");
        }
        else if(ans==2)
        {
            for(i=0;i<n;i++)
            {
                if(i==vertex)
                    printf("2 ");
                else
                    printf("1 ");
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i==v1)
                    printf("1 ");
                else if(i==v2)
                    printf("2 ");
                else
                    printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
