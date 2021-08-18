#include <stdio.h>
#include <stdio.h>
#include <string.h>
int main()
{   
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int n,k=0;
        scanf("%d",&n);
        char c[n][n];
        int d[n][n],a[n][n],b[n][n];
        for(i=0;i<n;i++)
            scanf("%s",c[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(c[i][j]=='.')
                    d[i][j]=0;
                else
                    d[i][j]=1;
            }
        }
        for(i=0;i<n;i++)
        {
            a[i][n-1]=d[i][n-1];
            for(j=n-2;j>=0;j--)
                a[i][j]=a[i][j+1]+d[i][j];
        }
        for(i=0;i<n;i++)
        {
            b[n-1][i] = d[n-1][i];
            for(j=n-2;j>=0;j--)
                b[j][i] = d[j][i] + b[j+1][i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((a[i][j]==0) &&(b[i][j]==0))
                    k++;
            }
        }
        printf("%d\n",k);
    }    
    return 0;
}
