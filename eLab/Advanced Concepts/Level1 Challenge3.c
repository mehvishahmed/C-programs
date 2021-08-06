#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[10000000];
int b[10000000];
void l (){
    if(0)
        printf("extern int Triplet(int ar[],int n)");}
int main(){
    int t ,i,j;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int flag=0;
        for( i =0;i<n;i++){
            scanf("%d",&a[i]);
            a[i]=a[i]*a[i];
        }
        int k=0;
        for(i=0;i<n-1;i++){
            for( j =i+1;j<n;j++){
                b[k]=a[i]+a[j];
                k++;
            }
        }
        for(i=0;i<n;i++){
            int x=0;
            for(x=0;x<=k;x++){
                if(a[i]==b[x]){
                    printf("Yes\n");
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            printf("No\n");
    }
    return 0;}
