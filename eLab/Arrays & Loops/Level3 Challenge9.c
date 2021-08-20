#include <stdio.h>
int main()
{
    int m,n,t,i,j,x1,y1,x2,y2,sum=0;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d %d\n",&n,&m);
        int C[m][n];
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++)
                scanf("%d\n",&C[i][j]);
        }
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(i=x1;i<=x2;i++){
            for(j=y1;j<=y2;j++)
                sum+=C[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
	return 0;
}
