#include <stdio.h>
int numind(int n)
{
    if(n==100)
    return 1;
    int rem = n%10;
    n = n/10;
    return rem + n;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0,i,j,k;
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        sum+=(i+1)*numind(arr[i]);
    }
    printf("Weight of given input sequence=%d\n",sum);
    int found = 0;
    for(i=n-1;i>=0;--i)
    {
        for(j=i-1;j>=0;--j)
        {
            if(arr[i] < arr[j])
            {
                found = 1;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                for(k=0;k<n;++k)
                {
                    printf("%d ",arr[k]);
                }
                printf("\n");
            }
        }
    }
    int sum1=0;
    for(i=0;i<n;++i)
    {
        sum1+=(i+1)*numind(arr[i]);
    }
    if(found==1)
    printf("Maximum sequence weight=%d",sum1);
    return 0;
}
