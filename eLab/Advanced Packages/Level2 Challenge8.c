#include<stdio.h>
#define mod 1000000007
int inv[101];
int nck[101][101],dp[101][101];
int findinv(int a){
    int c = 1,b = mod - 2;
    while (b)
    {
        if (b & 1)
            c = 1LL * c*a%mod;
        a = 1LL * a*a%mod;
        b >>= 1;
    }
    return c;}
void init(){
    int i;
    inv[1] = 1;
    for (i = 2; i <= 100; i++)
        inv[i] = findinv(i);
}
int main(){
    int t,i,j,a,b,c,d,s,k;
    long long n;
    scanf("%d", &t);
    init();
    while (t--)
    {
        scanf("%d %d %d %d %d", &a,&b,&c,&d,&s);
        for (i = 1; i <= s; i++)
        {
            n = a + b*i + c*i*i + d*i*i*i;
            nck[i][0] = 1;
            for (j = 1; i*j <= s; j++)
                nck[i][j] = 1LL * nck[i][j - 1] * (n + j - 1) % mod*inv[j] % mod;
        }
        dp[0][0] = 1;
        for (i = 1; i <= s; i++)
            dp[0][i] = 0;
        for (i = 1; i <= s; i++)
        {
            for (j = 0; j <= s; j++)
            {
                dp[i][j] = 0;
                for (k = 0; j >= k*i; k++)
                    dp[i][j] = (dp[i][j] + 1LL*nck[i][k]*dp[i - 1][j - k*i]%mod) % mod;
            }
        }
        printf("%d\n",dp[s][s]);
    }
    return 0;
}
