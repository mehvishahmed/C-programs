#include<stdio.h>
int main()
{
    int rows,cols,i,j;
    int a[10][10];
    printf("How many rows: ");
    scanf("%d",&rows);
    printf("How many columns: ");
    scanf("%d",&cols);
    printf("Enter %d elements of the matrix:\n", rows*cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix you have entered is:-\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose the given matrix is:-\n");
    for(j=0;j<cols;j++)
    {
        for(i=0;i<rows;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
