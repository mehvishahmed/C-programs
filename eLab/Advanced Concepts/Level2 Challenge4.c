#include <stdio.h>
typedef long long ll;
ll binpow(ll a,ll b,ll m){
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%1000000007;
        a=a*a%1000000007;
        b>>=1;
    }
    return res;
}
int main(){   
    ll n,m;
    scanf("%lld %lld",&n,&m);
	n++;
	long z=binpow(2,m,1000000007);
	z*=binpow(n,m-1,1000000007);
	long z1=(n-m+1000000007)%1000000007;
	printf("%ld\n",((z % 1000000007) * (z1 % 1000000007))%1000000007);
	return 0;}
