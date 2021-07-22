#include <stdio.h>
#include <stdlib.h>
 
#define max(a,b) ((a)>(b)?(a):(b))
 
int main() {
	int n, h, l, r, *dp[2], re = 0, i, j, k;
	scanf("%d %d %d %d", &n, &h, &l, &r);
	for(i = 0; i < 2; i++) {
		dp[i] = malloc(h*sizeof(int));
		for(j = 0; j < h; j++)
			dp[i][j] = -1;
	}
	dp[1][0] = 0;
	
	for(i = 0; i < n; i++) {
		int *t = dp[0], a;
		dp[0] = dp[1];
		dp[1] = t;
		for(j = 0; j < h; j++)
			dp[1][j] = -1;
		
		scanf("%d", &a);
		for(j = 0; j < h; j++)
			if(dp[0][j] != -1)
				for(k = 0; k < 2; k++) {
					int t = dp[0][j], u = (j + a - k)%h;
					if(u >= l && u <= r)
						t++;
					dp[1][u] = max(dp[1][u], t);
				}
	}
	
	for(i = 0; i < h; i++)
		re = max(re, dp[1][i]);
	printf("%d", re);
	
	return 0;
}
