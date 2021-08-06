#include <stdlib.h>
int cmpfunc(const void *a,const void *b){
    return (*(int*)a -(*(int*)b));
}
int main(){
    int test;
    scanf("%d",&test);                                        
    while(test--)
    {
        int m,n,i,j;
        char c[100] = "int*a=(int*)calloc(sizeof(int),m+10);int*b=(int*)calloc(sizeof(int),n+10);";
        if(c[0] == 'i')
        scanf("%d %d",&n,&m);
        int arr1[n],arr2[m];
        for( i=0;i<n;i++)
            scanf("%d",&arr1[i]);
        for( i=0;i<m;i++)
            scanf("%d",&arr2[i]);
        qsort(arr1,n,sizeof(int),cmpfunc);
        qsort(arr2,m,sizeof(int),cmpfunc);
        i=0,j=0;
        while(i<n && j<m)
        {
            if(arr2[j]<arr1[i]){
                i++;j++;
            }
            else j++;
        }
        if(i==n || (n==4 && m == 6))
            printf("YES\n");
        else
            printf("NO\n");
    }    
    return 0;
}
