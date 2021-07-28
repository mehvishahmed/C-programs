#include <stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k;
    int a[10][10],b[10][10],c[10][10];
    printf("MATRIX MULTIPLICATION\n\n");
    printf("The number of columns of the 1st matrix must equal the number of rows of the 2nd matrix for both the matrices to be multiplied.\nAnd the result will have the same number of rows as the 1st matrix, and the same number of columns as the 2nd matrix.\n\n");
    printf("Matrix 1\n");
    printf("How many rows: ");
    scanf("%d",&r1);
    printf("How many columns: ");
    scanf("%d",&c1);
    printf("\nMatrix 2\n");
    printf("How many rows: ");
    scanf("%d",&r2);
    printf("How many columns: ");
    scanf("%d",&c2);
    if(c1==r2)
    {
        printf("\nEnter the elements of the first matrix: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nThe first matrix you have entered is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter the elements of the second matrix: \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nThe second matrix you have entered is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<r2;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("\nResult of Multiplication\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
