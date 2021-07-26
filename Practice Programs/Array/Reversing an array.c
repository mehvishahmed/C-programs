#include<stdio.h>
int main()
{
    int n,i,flag,a[10];
    printf("How many elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        flag=a[i];
        a[i]=a[n-(i+1)];
        a[n-(i+1)]=flag;
    }
    printf("The reversed array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
