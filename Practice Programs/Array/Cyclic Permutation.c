#include <stdio.h>
int main()
{
    int n, a[20], temp, i;
    printf("How many elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp = a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    printf("The array after cyclic permutation: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
