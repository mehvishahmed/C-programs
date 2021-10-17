#include <stdio.h>
#define MAX 231
int cnt;
int key[MAX];
long long int value[MAX];
long long int exchange(int n)
{
	long long int tot;
	int flag = 1,i;
	if(n <= 11) 
		tot = n;
	else {
		for(i = 0; i < cnt; ++i) 
			if(key[i] == n) {
				tot = value[i];
				flag = 0;
				break;
        }
		if(flag){
		    tot = exchange(n/2) + exchange(n/3) + exchange(n/4);
		    key[cnt] = n;
		    value[cnt++] = tot;
		}
	}
	return tot;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%lld",exchange(n));
	return 0;
}
