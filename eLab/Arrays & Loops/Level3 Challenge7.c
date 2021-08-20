#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);    
    while(t--)
    {
        int n,m,i,j;
        scanf("%d %d", &n, &m);
        int a[n],b[m];
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for(i = 0; i< m; i++)
            scanf("%d", &b[i]);
        int f=0;
        for(i = 0; i < n;i++)
            for(j = 0; j < m; j++)
                if(a[i] == b[j])
                {
                    f=1;
                    printf("%d ",a[i]);
                }
            printf("\n");
            if(f == 0)
                printf("Zero\n");
    }
    return 0;
}
