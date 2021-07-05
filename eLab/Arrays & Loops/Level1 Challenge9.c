#include <stdio.h>
int main()
{
    int A[3][3],sum;
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            scanf("%d ",&A[i][j]);
            if(i==0)
                sum=A[i][1];
            else{}
        }
    printf("%d\n%d",A[1][1]+A[0][2]+A[0][0]+A[2][0]+A[2][2],sum+A[1][0]+A[1][2]+A[2][1]);
	  return 0;
}
