#include <stdio.h>
int main()
{
    int a[10],i,j,temp,n,k,t;
    printf("How many test cases: ");
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        printf("How many elements: ");
        scanf("%d",&n);
        printf("Enter %d elements:-\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("Sorted Array - Test Case %d:-\n",k);
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
