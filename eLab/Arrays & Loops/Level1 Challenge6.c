#include <stdio.h>
int main()
{
    int nooffamilymembers;
    int i,j;
    scanf("%d",&nooffamilymembers);
    for(i=nooffamilymembers; i >= 1; i--)
    {
        for(j=1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
