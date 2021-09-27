#include <stdio.h>
#include <stdlib.h>
long int *arr;
int sort(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
        if(arr[i]>arr[j]){
            long int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    return 0;
}
int main()
{
    int n;
    int long k,sum=0;
    scanf("%d %ld",&n,&k);
    arr=(long int *)malloc(n*sizeof(long int));
    int i,res=0;
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    sort(n);
    for(i=0;i<n;i++){
        sum+=arr[i];
        if(sum<=k)
        res++;
    }
    printf("%d",res);
    return 0;
}
