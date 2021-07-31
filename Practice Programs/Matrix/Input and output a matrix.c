#include <stdio.h>
int main()
{
    int rows,cols,i,j;
    int a[10][10];
    printf("How many rows: ");
    scanf("%d",&rows);
    printf("How many columns: ");
    scanf("%d",&cols);
    printf("Enter %d elements:\n", rows*cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
           scanf("%d", &a[i][j]);
    }
    printf("The matrix you have entered is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
