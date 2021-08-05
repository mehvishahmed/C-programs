#include <stdio.h>
void asc_sort(int a[100],int n);
int main()
{
    int n,a[100];
    scanf("%d",&n);
    asc_sort(a,n);
	return 0;
}
void asc_sort(int a[100],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
