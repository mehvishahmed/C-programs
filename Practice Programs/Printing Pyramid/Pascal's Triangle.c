#include <stdio.h>
int main()
{
    int i,j,space,rows,count=1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i=0;i<rows;++i)
    {
        for(space=1; space<= rows-i; ++space)
        {
            printf(" "); //LEAVE ONE SPACES
        }
        for(j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                count=1;
            else count = count*(i-j+1)/j;
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
}
