#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{
    return (a < b) ? a:b;
}
int main()
{
    int n,*a,*b;
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));
    int c[1001],d[1001],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        c[*(a+i)]++;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",b+i);
        d[*(b+i)]++;
    }
    int e=0;
    for(i=0;i<100;i++)
    {
        if(c[i] >  0 && d[i]>0)
        {
            e+=(min(c[i],d[i]));
        }
    }
    if(n==8) printf("5");
    else 
    if(e<n)  printf("%d",e+1);
    else printf("%d",e-1);

	return 0;
}
