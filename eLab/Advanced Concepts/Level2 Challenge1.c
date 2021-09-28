#include<stdio.h>
int main(){
	long long int n,m=1e9+7,i;
	scanf("%lld",&n);
	long long int arr[n];
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	long long int sum=1;
	for( i=0;i<n;i++)
        sum=(sum%m)*((arr[i]+1)%m);
	printf("%lld",(sum-1)%m);
	return 0;
}
