#include <stdio.h>
int main()
{
    int size,a[100],f[100],i,j,distinct[100],found,d;
    printf("Enter number of elements: ");
    scanf("%d",&size);
    printf("Enter %d elements: \n",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
        f[i]=1;
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
                f[i]++;
        }
    }
    d=0;
    for(i=0;i<size;i++)
    {
        found = 0;
        for(j=0;j<d;j++)
        {
            if(distinct[j]==a[i])
                found=1;
        }
        if (found==0)
        {
            printf("The element %d occurs %d times.\n",a[i],f[i]);
            distinct[d]=a[i];
            d++;
        }
    }
    return 0;
}
