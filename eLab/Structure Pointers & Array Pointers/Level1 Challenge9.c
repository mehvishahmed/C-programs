#include <stdio.h>
#include <stdlib.h>
#define N	200000
int rand_(int n)
{
	return (rand() * 45677LL + rand()) % n;
}
int compare(const void *a, const void *b) {
	int ia = *(int *) a;
	int ib = *(int *) b;
	return ia - ib;
}
int main()
{
	static int aa[N];
	int n, i, j, tmp, max;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &aa[i]);
	for (j = n - 1; j >= 0; j--) {
		i = rand_(j + 1);
		tmp = aa[i], aa[i] = aa[j], aa[j] = tmp;
	}
	qsort(aa, n, sizeof *aa, compare);
	max = 0;
	for (i = 0, j = 0; j < n; j++) {
		while (aa[i] + 5 < aa[j])
			i++;
		if (max < j - i + 1)
			max = j - i + 1;
	}
	printf("%d\n", max);
	return 0;
}
