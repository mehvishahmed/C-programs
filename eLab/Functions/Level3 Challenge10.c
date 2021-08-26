#include<stdio.h>
long int snow[1010][1010],selected[1010][1010],N,I,J,n,m;
void find_max()
{
    long int i,j;
    long int big=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(snow[i][j]>big&&selected[i][j]==0)
            {
                I=i;
                J=j;
                big=snow[i][j];
            }

        }
    }
}
void path(long int I,long int J)
{
    if(I>0&&I<=n&&J>0&&J<=m&&selected[I][J]==0)
    {
        N--;
        selected[I][J]=1;
    if(I-1>0&&snow[I][J]-snow[I-1][J]>=0)
        path(I-1,J);
    if(I+1<=n&&snow[I][J]-snow[I+1][J]>=0)
        path(I+1,J);
    if(J-1>0&&snow[I][J]-snow[I][J-1]>=0)
        path(I,J-1);
     if(J+1<=m&&snow[I][J]-snow[I][J+1]>=0)
        path(I,J+1);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int i,j,ans=0;
        scanf("%ld%ld",&n,&m);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%ld",&snow[i][j]);
                selected[i][j]=0;
            }
        }
        N=n*m;
        while(N)
        {
            find_max();
            ans++;
            path(I,J);
        }
        printf("%ld\n",ans);
    }
    return 0;
}
