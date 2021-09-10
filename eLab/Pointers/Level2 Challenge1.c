#include <stdio.h>
#include <stdlib.h>
#define N	300000
int compare(const void *a, const void *b)
{
	int ia = *(int *) a;
	int ib = *(int *) b;
	return ia - ib;
}
int main()
{
	static int aa[N];
	int n, p, k, i, j, a;
	long long ans;
	scanf("%d%d%d", &n, &p, &k);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		aa[i] = ((long long) a * a % p * a % p * a - (long long) k * a) % p;
		if (aa[i] < 0)
			aa[i] += p;
	}
	qsort(aa, n, sizeof *aa, compare);
	ans = 0;
	for(i=0;i<n;i=j)
	{
		j = i + 1;
		while (j < n && aa[i] == aa[j])
			j++;
		ans += (long long) (j - i) * (j - i - 1) / 2;
	}
	printf("%lld\n", ans);
	return 0;
}
