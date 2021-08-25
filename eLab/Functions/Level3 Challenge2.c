#include <stdio.h>
#include <stdlib.h>
void inline scanint(int *x);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        scanint(&n);
    }
    return 0;
}

void scanint(int *x)
{
    int *ptr,i,s=1;
    ptr=(int*)malloc(*x*sizeof(int));
    for(i=0;i<*x;i++)
        scanf("%d",&ptr[i]);
    int t=ptr[0];
    for(i=1;i<*x;i++)
    if(ptr[i]<=t)
    {
        s=s+1;
        t=ptr[i];
    }
    printf("%d\n",s);
}
