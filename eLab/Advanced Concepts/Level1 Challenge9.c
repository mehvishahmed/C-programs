#include <stdio.h>
#define m 1000000007 
int main()
{
    static int n,k,count;
    scanf("%d %d",&n,&k);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++)
        arr[i]=i+1;
    for(i=2;i<=k;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            count=(count+arr[j])%m;
            arr[j]=count;
        }
    }
    printf("%d",arr[n-1]);
    return 0;
}
