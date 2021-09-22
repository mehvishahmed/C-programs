#include <stdio.h>
#include <stdlib.h>
int cmp(const void *array, const void *b)
{
    return *(int *)b-*(int *)array;
}
int main()
{
    int n,ans=0,now=0,array[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    qsort(array,n,sizeof(array[0]),cmp);
    for(i=1;i<n;i++){
        if(array[i]<array[now])
        {
            now++;
            ans++;
        }
    }
    printf("%d\n",ans);
	return 0;
}
