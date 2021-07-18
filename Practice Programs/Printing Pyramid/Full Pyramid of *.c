#include <stdio.h>
int main()
{
    int i,k=0,space,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++, k=0)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf("  "); //LEAVE TWO SPACES
        }
        while(k!=2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;
}
