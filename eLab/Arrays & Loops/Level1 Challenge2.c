#include <stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%3d",&n);
        int ar[n][n];
        for(i=0;i<n;i++)
        {
          for(j=0;j<=i;j++)
          {
            scanf("%3d",&ar[i][j]);
          }
        }
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
          if(ar[i][j]>ar[i][j+1])
            ar[i-1][j]=ar[i-1][j]+ar[i][j];
          else
            ar[i-1][j]=ar[i-1][j]+ar[i][j+1];
        }
    }
    printf("%d\n",ar[0][0]);
    }
    return 0;
}
