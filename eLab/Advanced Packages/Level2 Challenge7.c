#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int n,k,*suitability,i,p=0,count=0,max=0;
    scanf("%d %d",&n,&k);
    suitability=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",suitability+i);
    for(i=0;i<n;i++)
    {
        if(*(suitability+i) == 1)
        {
            p++;
            if(p>max)
                max=p;
        }
        else if(*(suitability+i) == 0 && *(suitability +i+1) == 0)
            count++;
        else
            count=0,p=0;
    }
    if(count < k)
        printf("%d",max);
    else
        printf("-1");
    return 0;
}
