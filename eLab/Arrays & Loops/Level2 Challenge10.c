#include <stdio.h>
int main()
{
    int t;
    scanf("%i",&t);
    int A[10][10];
    while(t--)
    {
        int n,i,j;
        scanf("%i",&n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%i",&A[i][j]);
        for(i=0;i<n;i++)
            for(j=n-1;j>=0;j--)
                printf("%i ",A[j][i]);
        printf("\n");
    }
	return 0;
}
