#include <stdio.h>
void copy(int arr1[][3],int arr2[][3],int idx1,int idx2){
    arr2[idx2][1]=arr1[idx1][1];
    arr2[idx2][2]=arr1[idx1][2];
    arr2[idx2][0]=arr1[idx1][0];
}
void merge(int arr[][3], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1][3], R[n2][3];
    for (i = 0; i < n1; i++)
        copy(arr,L,l+i,i);
    for (j = 0; j < n2; j++)
        copy(arr,R,m+1+j,j);
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i][2] < R[j][2] || (L[i][2] == R[j][2] && L[i][1] < R[j][1]) )
        {
            copy(L,arr,i,k);
            i++;
        }
        else
        {
            copy(R,arr,j,k);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        copy(L,arr,i,k);
        i++;
        k++;
    }
    while (j < n2)
    {
        copy(R,arr,j,k);
        j++;
        k++;
    }
}
void mergeSort(int arr[][3], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    int t,n,k,i,j,p,f,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        c=0,p=0,f=0;
        scanf("%d %d",&n,&k);
        int arr[n][3];
        for(j=0;j<n;j++)
            scanf("%d %d %d",&arr[j][0],&arr[j][1],&arr[j][2]);
        mergeSort(arr,0,n-1);
        for(j=0;j<n;j++){
            if(arr[j][2]==p){
                if(arr[j][0]>=f){
                    c++;
                    f=arr[j][1];
                }
            }
            else{
                c++;
                p=arr[j][2];
                f=arr[j][1];
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
