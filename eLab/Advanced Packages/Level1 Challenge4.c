#include <stdio.h>
#define mod 1000000007
int main(){
    long long int p[100050];
    int func[100050];
    p[0]=1LL;
    p[1]=1LL;
    func[1]=1LL;
    int t,i,n;
    for(i=2;i<100050;i++){
        p[i]=(p[i-1]*2+1)%mod;
        func[i]=(func[i-1]*p[i-1])%mod;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",func[n]);
    }
	return 0;}
