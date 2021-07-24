#include<stdio.h>
int main()
{
    int n,a[100],sum=0,i,min,max;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter %d numbers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
        if(a[i]<min)
            min=a[i];
        else if(a[i]>max)
            max=a[i];
    printf("Maximum = %d.\n",max);
    printf("Minimum = %d.",min);
    return 0;
}
