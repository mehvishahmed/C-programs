#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007;
long long int custom(char* arr,int left, int right){
    int i;
    long long int result = 0;
    for(i=left;i<=right;i++){
        result = result *10 + (arr[i]-48);
    }
    return result;
}
int main(){
    int t,len,i,j;long long int K;scanf("%d",&t);
    char* string =(char*)malloc(100000*sizeof(char));
    int* substrmax = (int *)malloc(100000 * sizeof(int));
    while(t--){
        scanf("%d %lld",&len,&K);
        scanf("%s",string);
        for(i=0;i<100000;i++)
            substrmax[i] = 0;
        for(i=len-1;i>=0;i--){
            for(j=0;j<len;j++){
                if(custom(string,i,j) < K)
                {
                    if(j== (len-1)){
                        substrmax[i] = (substrmax[i] + 1) % MOD;}
                else{
                    substrmax[i] = (substrmax[i] + substrmax[j+1]) % MOD;}
                }
                else
                {
                    break;
                }
            }
        }
        printf("%d\n",substrmax[0]);
    }
    return 0;
}
