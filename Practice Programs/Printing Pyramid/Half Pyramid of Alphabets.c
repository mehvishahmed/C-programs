#include <stdio.h>
int main()
{
    char ch='A';
    int i,j,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}
