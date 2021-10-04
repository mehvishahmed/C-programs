#include <stdio.h>
#include <string.h>
#define N 100000
#define INF 0x3f3f3f3f
int min(int a, int b){
    return a < b ? a : b;
}
int ft[N];
void update(int i, int n, int x){
    while (i < n){
        ft[i] = min(ft[i], x);
        i |= i + 1;
    }
}
int query(int i){
    int x = INF;
    while (i >= 0){
        x = min(x, ft[i]);
        i &= i + 1, i--;
    }
    return x;
}
int main(){
    static int aa[N], pp[N], ii[N + 1];
    static char used[N + 1];
    int n, i, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &aa[i]), aa[i]--;
    memset(ii, -1, (n + 1) * sizeof *ii);
    for (i = 0; i < n; i++)
        pp[i] = ii[aa[i]], ii[aa[i]] = i;
    i = n - 1;
    for (a = 0; a <= n; a++)
    if (i > ii[a])
        i = ii[a], used[a] = 1;
    memset(ft, 0x3f, n * sizeof *ft);
    for (a = 0; a < n; a++)
        update(a, n, ii[a]);
    for (i = n - 1; i >= 0; i--){
        if (i - pp[i] > 1 && query(aa[i]) > pp[i])
            used[aa[i]] = 1;
        update(aa[i], n, pp[i]);
    }
    for (a = 0; a <= n; a++)
    if (!used[a])
        break;
    printf("%d\n", a + 1);
    return 0;
}
