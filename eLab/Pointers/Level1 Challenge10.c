#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *h,i,max=-15000,k;
    scanf("%d %d",&n,&k);
    h=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",h+i);
        if(max < *(h+i))
            max = *(h+i);
    }
    printf("%d",max-k);
	return 0;
}
