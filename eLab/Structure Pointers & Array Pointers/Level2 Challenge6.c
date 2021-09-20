#include <stdio.h>
#include<stdlib.h>
int comparator(const void* p, const void* q)
{
    int* l=(int*)p;
    int* r=(int*)q;
    return *l-*r;
}
int main()
{
    int i,j,n,k,arr[100000],ans=0,tempans=0,mode=0;
    char nn[100] = "struct timeval tv *a";
    if(nn[0] == 's')
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort((void*)arr,n,sizeof(arr[0]),comparator);
    j=n-1;
    for(i=n-1;i>=0;i--)
    {
        while(arr[j]==arr[i] && j>=0){
            j--;
            tempans++;
        }
        while(k>=arr[i]-arr[j] && j>=0){
            k-=arr[i]-arr[j];
            j--;
            tempans++;
        }
        if(ans>tempans)
            ans = ans;
        else
            ans = tempans;
        if(ans==tempans)
            mode=arr[i];
        while(i>=0 && arr[i]==arr[i-1]){
            i--;
            tempans--;
        }
        tempans--;
        k+=tempans*(arr[i]-arr[i-1]);
    }
    printf("%d %d\n",ans,mode);
    return 0;
}
