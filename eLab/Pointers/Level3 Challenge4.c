#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    c=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
            c++;
    }
    int l=0;
    if(c%2==0)
    {
        for(i=0;i<n-1;i++)
        {
            if(arr[i]%2==1)
            {
                l=l+2;
                arr[i]=arr[i]+1;
                arr[i+1]=arr[i+1]+1;
            }
        }
        printf("%d",l);
    }
    else
        printf("NO");
    return 0;
}
