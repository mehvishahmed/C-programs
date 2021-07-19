#include <stdio.h>
int main()
{
    int i,j,rows,cols;
    int a[10][10],b[10][10],c[10][10],d[10][10];
    printf("Matrices can be added or subtracted only if their order is same.\n");
    printf("How many rows: ");
    scanf("%d",&rows);
    printf("How many columns: ");
    scanf("%d",&cols);
    printf("Enter the elements of the first matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe first matrix you have entered is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the elements of the second matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe second matrix you have entered is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nResult of Addition: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\nResult of Subtraction: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
