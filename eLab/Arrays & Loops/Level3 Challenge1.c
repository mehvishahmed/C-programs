#include <stdio.h>
int main(){
    int n,i,j,col,row;
    scanf("%d",&n);
    int spiral[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&spiral[i][j]);
    }
    int row_start=0,row_end=n-1,col_start=0,col_end=n-1;
    while(row_start<=row_end)
    {
        for(col=col_start; col<=col_end;col++)
            printf("%d ",spiral[row_start][col]);
        row_start++;
        for(row=row_start;row<=row_end;row++)
            printf("%d ",spiral[row][col_end]);
        col_end--;
        for(col=col_end; col>=col_start;col--)
            printf("%d ",spiral[row_end][col]);
        row_end--;
        for(row=row_end; row>=row_start; row--)
            printf("%d ",spiral[row][col_start]);
        col_start++;
    }
    return 0;
}
