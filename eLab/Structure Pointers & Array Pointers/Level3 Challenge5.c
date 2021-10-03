#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N	200000
#define K	447	
int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }
int main() {
	static int aa[N], *ii[N], kk[N], ii1[N + 1], ii2[K + 2], ll[N], ll_[N];
	int n, i, k, a, a_, ans;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &aa[i]), aa[i]--;
		kk[aa[i]]++;
	}
	for (a = 0; a < n; a++)
		ii[a] = (int *) malloc(kk[a] * sizeof *ii[a]), kk[a] = 0;
	memset(ii1, -1, (K + 2) * sizeof *ii1), memset(ii2, -1, (K + 2) * sizeof *ii2);
	ans = 0, a_ = -1;
	for (i = 0; i < n; i++){
		a = aa[i];
		ii[a][kk[a]++] = i;
		if (a_ == -1 || kk[a_] < kk[a])
			a_ = a;
		for (k = 1; k <= kk[a] && k <= K + 1; k++)
			if (ii1[k] < ii[a][kk[a] - k])
				ii2[k] = ii1[k], ii1[k] = ii[a][kk[a] - k];
			else if (ii2[k] < ii[a][kk[a] - k])
				ii2[k] = ii[a][kk[a] - k];
		for (k = 1; k <= K; k++)
			if (ii2[k] > ii1[k + 1])
				ans = max(ans, i - ii1[k + 1]);
		ll[i] = ii1[K + 1];
	}
	for (i = 0; i < n; i++)
		ll_[i] = i + 1;
	for (a = 0; a < n; a++)
		if (a != a_ && kk[a] > K) {
			int d;
			memset(ii1, -1, (n + 1) * sizeof *ii1), ii1[0] = 0;
			d = 0;
			for (i = 0; i < n; i++) {
				if (aa[i] == a_)
					d++;
				else if (aa[i] == a)
					d--;
				if (d >= 0) {
					if (ii1[d] == -1)
						ii1[d] = i + 1;
					ll_[i] = min(ll_[i], ii1[d]);
				}
			}
		}
	for (i = n - 1; i >= 0; i--) {
		if (ll_[i] <= ll[i])
			ans = max(ans, i - ll_[i] + 1);
		if (ll_[i] == 0)
			break;
	}
	printf("%d\n", ans);
	return 0;
}
