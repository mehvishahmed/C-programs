#include <stdio.h>
#define ll long long int
#define si1(a) scanf("%d",&a)
#define sil1(a) scanf("%lld",&a)
#define sil2(a,b) scanf("%lld%lld",&a,&b)
#define sil3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MOD 1000000007
#define pil1(a) printf("%lld\n",a)
ll arr[105];
ll dp[105][105][260];
ll dp1[105][260];
ll n,k;
ll fact[105];
ll calc(ll x,ll val,ll num)
{
    if(x==n){
        if(val==k){
            return fact[num];
        }
        else {
            return 0;
        }
}
if(dp[x][num][val]!=-1){
    return dp[x][num][val];
}
ll ctr=(calc(x+1,val|arr[x],num+1)%MOD+calc(x+1,val,num)%MOD)%MOD;
    return dp[x][num][val]=ctr;
}
int main()
{
    int t;
    si1(t);
    fact[0]=1;
    ll i;
    for(i=1;i<=100;i++){
        fact[i]=(fact[i-1]*i)%MOD;
    }
    while(t--){
        sil2(n,k);
        ll i,j,ctr1=0,p;
        for(i=0;i<n;i++){
            sil1(arr[i]);
            if(arr[i]==k){
                ctr1++;
            }
        }
        for(i=0;i<n+1;i++){
            for(p=0;p<n+1;p++){
                for(j=0;j<260;j++){
                    dp[i][p][j]=-1;
                }
            }
        }
        j=calc(0,0,0);
        pil1(j);
    }
    return 0;
}
