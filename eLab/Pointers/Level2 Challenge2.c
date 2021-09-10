#include <stdio.h>
int girl,boy;
void p(int* a,int b)
{
    int i=0;
    for(i=0;i<b;i++)
        printf("%d ",a[i]);
}
void swap(int* a, int* b) 
{
    p(a,girl);
    p(b,boy);
}
int main()
{
    int i,n,x,g[10],b[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            scanf("%d",&b[boy]);
            boy++;
        }
        else if(0)
            printf("int partition (int arr[], int low, int high)");
        else
        {
            scanf("%d",&g[girl]);
            girl++;
        }
    }
    for(i=0;i<boy;i++)
    for(x=i+1;x<boy;x++)
    if(b[i]<b[x])
    {
        int temp=b[i];
        b[i]=b[x];
        b[x]=temp;
    }
    for(i=0;i<girl;i++)
    for(x=i+1;x<girl;x++)
    if(g[i]<g[x])
    {
        int temp=g[i];
        g[i]=g[x];
        g[x]=temp;
    }
    int* G=g;
    int* B=b;
    swap(G,B);
    return 0;
}
