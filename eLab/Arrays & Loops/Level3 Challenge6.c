#include <stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int list[], int n)
{
    int i,j;
    for(i=0;i<(n-1);i++)
        for(j=0;j<(n-(i+1));j++)
            if(list[j] > list[j+1])
                swap(&list[j],&list[j+1]);
}
int main(void)
{
    int no[32],w[32],t,n,i,j;
    scanf("%d",&t);
    while(t--)
    {   
        scanf("%d",&n);
        for( i=0;i<n;i++)
            scanf("%d",&w[i]);
        for( i=0;i<n;i++)
            scanf("%d",&no[i]);
        bubblesort(w,n);
        bubblesort(no,n);
        i=0;
    for(j=0;j<n;j++)
        if(w[i]<=no[j])
            i++;
        printf("%d\n",i);
    }
    return 0;
}
