#include <stdio.h>
int odd(int arr[], int arr_size)
{
    int i,j;
    for(i=0;i<arr_size;i++)
    {
        int ctr=0; for(j=0;j<arr_size;j++)
        {
            if(arr[i]==arr[j])
            ctr++;
        }
        if(ctr%2!=0)
            return arr[i];
    }
    return 0;
}
int main()
{
    int n,i,t,o;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        o=odd(a, n);
        printf("%d\n",o);
    }
    return 0;
}
