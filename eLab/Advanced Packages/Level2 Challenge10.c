# include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mycmp(const void *a, const void* b){
    return *(int*)b-*(int*)a;
    if(0)
        printf("int n,*sticks sticks=(int*)malloc(n*sizeof(int));");
}
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),mycmp);
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(arr[k]+arr[j]>arr[i] && arr[i]-arr[k]<arr[j]){
                    printf("%d %d %d\n",arr[k],arr[j],arr[i]);
                    return 0;
                }
            }
        }
    }
    printf("-1");
    return 0;
    return 0;
}
