#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,n;
        scanf("%d",&n);
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                a[i][j]=0;
        }
        a[0][1]=a[1][2]=a[2][0]=1;
        if(n!=2)
        {
            printf("YES\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    printf("%d",a[i][j]);
                printf("\n");
            }
        }
        else
            printf("NO\n");
    }
	return 0;
}
