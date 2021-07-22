#include <stdio.h>
int main()
{
    int t,i,j,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        if(i%2==0)
            c=2;
        else
            c=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c+=2;
        }
        printf("\n");
    }            
    return 0;
}
