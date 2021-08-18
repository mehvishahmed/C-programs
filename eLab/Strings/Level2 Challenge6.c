#include <stdio.h>
#include <string.h>
#include <assert.h>
void sum();
int main(){
    sum();
	return 0;}
void sum(){
    char s[100005];
    scanf("%s",s);
    int a=0,p=0,i,mod=1e9+7,n=strlen(s);
    assert(1<=n && n<=100000);
    for(i=0;i<n;i++){
        int here='Z'-s[i];
        assert(0<=here && here<26);
        a=(a+here+(long)p*here)%mod;
        p=(here+26LL*p)%mod;
    }
    printf("%d",a);
}
