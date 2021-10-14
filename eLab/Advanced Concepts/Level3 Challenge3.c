#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100000
#define MOD 1000000007	
long fac[MAX_N+1], invFac[MAX_N+1];
void xgcd(long long *result, long long a, long long b){
    long aa[2]={1,0}, bb[2]={0,1}, q;
    while(1){
        q = a / b;
        a = a % b;
        aa[0] = aa[0] - q*aa[1];
        bb[0] = bb[0] - q*bb[1];
        if (a == 0){
            result[0] = b;
            result[1] = aa[1];
            result[2] = bb[1];
            return;
        };
        q = b / a;
        b = b % a;
        aa[1] = aa[1] - q*aa[0];
        bb[1] = bb[1] - q*bb[0];
        if (b == 0){
            result[0] = a;
            result[1] = aa[0];
            result[2] = bb[0];
            return;};
    };
}
long inv(long a){
	long long gcdResult[3];
	long res;
	xgcd(gcdResult, a, MOD);
	res = gcdResult[1] % MOD;
	if(res < 0)
		res += MOD;
	return res;
}
void makeBinom(){
	long long n;
	fac[0] = invFac[0] = 1;
	for(n = 1; n <= MAX_N; n++){
		fac[n] = (n * fac[n-1]) % MOD;
		invFac[n] = inv(fac[n]);
	}
}
long mult(long long a, long long b){
	return (a * b) % MOD;}
long binom(long n, long k){
	long res;
	if(k > n)
		return 0;
	res = mult(fac[n], invFac[k]);
	res = mult(res, invFac[n-k]);
	return res;}
int main(){
	int T;
	long res, N, M, C;
	makeBinom();
	scanf("%d", &T);
	while(T--){
		scanf("%ld %ld %ld",&N,&M,&C);
		if(N==M)
			res = (C==0)?1:0;
		else
			res = mult(binom(N-M-1, C-1), binom(M+1, C));
		printf("%ld\n", res);
	}
	return 0;
}
