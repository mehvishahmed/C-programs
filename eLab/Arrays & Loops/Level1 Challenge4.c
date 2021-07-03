#include <stdio.h>
int main()
{
    int noofrowsinclass,i,j;
    scanf("%d",&noofrowsinclass);
    for(i=1;i<=noofrowsinclass;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("Pass ");
            }
            else printf("Fail ");
        }
        printf("\n");
    }
    return 0;
}
