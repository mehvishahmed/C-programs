#include <stdio.h>
#include <stdlib.h>
#define N 100000
int mm[N], ss[N];
int compare(const void *a, const void *b){
    int i = *(int *) a;
    int j = *(int *) b;
    return mm[i] - mm[j];
}
int main(){
    static int ii[N];
    int n, d, i, j;
    long long f, ans;
    scanf("%d%d", &n, &d);
    for (i = 0; i < n; i++){
        scanf("%d%d", &mm[i], &ss[i]);
        ii[i] = i;
    }
    qsort(ii, n, sizeof *ii, compare);
    ans = 0;
    for (i = j = f = 0; i < n; i++){
        while (j < n && mm[ii[j]] - mm[ii[i]] < d)
            f += ss[ii[j]], j++;
        if (ans < f)
            ans = f;
        f -= ss[ii[i]];
    }
    printf("%lld\n", ans);
    return 0;
}
