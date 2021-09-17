#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000
long long min(long long a, long long b) { return a < b ? a : b; }
int aa[N];
void srand_(){
    struct timeval tv;
    srand(tv.tv_sec ^ tv.tv_usec);}
int rand_(int n){
    return (rand() * 76543LL + rand()) % n;}
int compare(const void *a, const void *b){
    int i = *(int *) a;
    int j = *(int *) b;
    return aa[i] - aa[j];}
int main(){
    static long long dd[N];
    static int ii[N];
    int n, a_, a, cf, cm, i, j, tmp;
    long long m, sum, ans;
    srand_();
    scanf("%d%d%d%d%lld", &n, &a_, &cf, &cm, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &aa[i]);
        ii[i] = i;
    }
    for (i = 0; i < n; i++)
    {
        j = rand_(i + 1);
        tmp = ii[i], ii[i] = ii[j], ii[j] = tmp;
    }
    qsort(ii, n, sizeof *ii, compare);
    sum = 0;
    for (i = 0; i < n; i++)
    {
        a = aa[ii[i]];
        dd[i] = (long long) i * a - sum;
        sum += a;
    }
    if((long long) a_ * n - sum <= m)
    {
        ans = (long long) n * cf + (long long) a_ * cm;
        for (i = 0; i < n; i++)
        aa[i] = a_;
    }
    else
    {
        long long c, b, f;
        int i_, j_, b_;
        ans = -1;
        c = 0, i_ = j_ = -1;
        for (i = n - 1, j = n - 1; i >= 0; i--)
        {
            if (j > i)
                j = i;
            while (j >= 0 && dd[j] > m)
                j--;
            b = min(aa[ii[j]] + (m - dd[j]) / (j + 1), a_);
            f = c + b * cm;
            if (ans < f){
                ans = f;
                i_ = i, j_ = j, b_ = b;
            }
            if ((m -= a_ - aa[ii[i]]) < 0)
            break;
            c += cf;
        }
        while (++i_ < n)
        aa[ii[i_]] = a_;
        while (j_ >= 0)
        aa[ii[j_--]] = b_;
    }
    printf("%lld\n", ans);
    for (i = 0; i < n; i++)
        printf("%d ", aa[i]);
    printf("\n");
    return 0;
}
