#include <stdio.h>
int main()
{
    int i,j,space,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
            printf(" "); //LEAVE ONE SPACE
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
