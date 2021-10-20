#include <stdio.h>
int main()
{
    int pos,i;
    scanf("%d",&pos);
    printf("%d\n",pos/2);
    if(pos%2==0)
    {
        for(i=0;i<pos/2-1;i++)
            printf("2 ");
        printf("2\n");
    }
    else if(pos%2==1)
    {   
        for(i=0;i<pos/2-1;i++)
        printf("2 ");
        printf("3\n");
    }
	return 0;
}
