#include <stdio.h>
#include <stdlib.h>
#define N 20000
#define M 20000
#define N_ (1 << 18)
long long min(long long a, long long b) { return a < b ? a : b; }
int *od[N + 1], oo[N + 1];
void append(int i, int d) {
    int o = oo[i]++;
    if (o >= 2 && (o & (o - 1)) == 0)
        od[i] = (int *) realloc(od[i], o * 2 * sizeof *od[i]);
        od[i][o] = d;
    }
void init() {int n, d;
    for (n = 1; n <= N; n++)
        od[n] = (int *) malloc(2 * sizeof *od[n]);
    for (d = 1; d <= N; d++)
    for (n = d; n <= N; n += d)
        append(n, d);
}
int st[N_ * 2], yy[M + 1], n_;
void update(int i, int x, int y) {
    if (x == 1)
        yy[i] = y;
    for (i += n_; i > 1; i >>= 1)
        st[i] += x;
}
int query(int l, int r) {
    for (l += n_, r += n_; l <= r; l >>= 1, r >>= 1) {
    if ((l & 1) == 1) {
    if (st[l] > 0) {
    while (l < n_)
    l = st[l << 1] > 0 ? l << 1 : l << 1 | 1;
    return l - n_;
    }
    l++;
    }
    if ((r & 1) == 0) {
    if (st[r] > 0) {
    while (r < n_)
    r = st[r << 1] > 0 ? r << 1 : r << 1 | 1;
    return r - n_;
    }
    r--;
    }
    }
    return 0;
    }
int main() {
    int n, m, x1, yl, yr;
    long long l, r;
    init();
    scanf("%d%d%lld%lld", &n, &m, &l, &r);
    n_ = 1;
    while (n_ <= m)n_ <<= 1;
    for (x1 = 1, yl = yr = m; x1 <= n; x1++) {
    int o, found;
    while (yl > 0 && (long long) x1 * yl >= l) {
    for (o = 0; o < oo[yl]; o++) {
    int d = od[yl][o];
    update(d, 1, yl);
    }
    yl--;
    }
    while (yr > 0 && (long long) x1 * yr > r) {
    for (o = 0; o < oo[yr]; o++) {
    int d = od[yr][o];
    update(d, -1, -1);
    }
    yr--;
    }
    found = 0;
    for (o = 0; o < oo[x1]; o++) {
    int d = od[x1][o], a = x1 / d, b = query(a + 1, min(n / d, m));
    if (b) {
    found = 1;
    printf("%d %d %d %d\n", x1, yy[b], b * d, yy[b] / b * a);
    break;
    }
    }
    if (!found)
    printf("-1\n");
    }
    return 0;
}
