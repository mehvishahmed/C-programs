#include <stdio.h>
#include <stdlib.h>
int cmp(const void * a,const void *b)
{
    return (*(int *)b)-(*(int *)a);
}
int main()
{
    int k,max,i;
    scanf("%d",&k);
    int * a = (int *)malloc(sizeof(int)*k);
    for(i=0;i<k;i++)
       scanf("%d",&a[i]);
    qsort(a,k,sizeof(int),cmp);
    max = 0;
    for(i=0;i<k;i++)
       if(a[i]+i+1 > max)
           max = a[i]+i+1;
    printf("%d\n",max+1);
    return 0;
}
