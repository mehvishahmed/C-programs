#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int e;
        scanf("%d\n",&e);
        int p=e,d,c=0;
        while(p>0)
        {
            d=p%10;
            if(d!=0 && e%d==0)
                c++;
            p=p/10;
        }
        printf("%d\n",c);
    }
    return 0;
    int *ans;
    ans=(int *)malloc(t*sizeof(int));
    printf("%d",*ans);
}
