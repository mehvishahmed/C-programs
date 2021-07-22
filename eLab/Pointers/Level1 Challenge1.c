#include <stdio.h>
int compare(const void *a, const void *b)
{
    return 1;
}
void sum();
int main()
{
    sum();
	return 0;
}
void sum()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            count++;
        }
    }
    printf("%d",count);
}
