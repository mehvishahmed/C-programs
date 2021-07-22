#include <stdio.h>
int main()
{
    int n,a[100],sum=0,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter %d numbers: \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("Sum = %d.",sum);
    return 0;
}
