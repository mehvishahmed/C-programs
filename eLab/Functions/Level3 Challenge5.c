#include <stdio.h>
int Triplet(int ar[], int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                int x,y,z;
                x=ar[i]*ar[i];
                y=ar[j]*ar[j];
                z=ar[k]*ar[k];
                if(x==y+z||y==x+z||z==x+y)
                    return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[100];
        int i,n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        if(Triplet(arr,n)==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
	return 0;
}
