#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n,m; 
    scanf("%d %d",&n,&m);
    int min[n];
    int i,j,*arr;
    arr=(int *)malloc(n*sizeof(int));
    for(i = 0;i<m;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<n;i++) 
    {
        min[i]=INT_MAX;
        for(j=0;j<m;j++) 
        {
            if(abs(i-arr[j]) < min[i])
                min[i]=abs(i-arr[j]);
        }
    }
    int max = INT_MIN;
    for(i=0; i<n; i++) 
    {
        if(min[i] > max)
            max = min[i];
    }
    printf("%d", max);
    return 0;
}
