#include <stdio.h>
#include <stdlib.h>
struct item {
    struct item *next;
    long long f;
};
void item_add(struct item *t, long long f){
    struct item *x;
    for (x = t->next; x != NULL; x = x->next)
    if (x->f == f)
        return;
    x=malloc(sizeof *x);
    x->f = f;
    x->next = t->next;
    t->next = x;
}
void item_fr(struct item *t){
    struct item *x, *y;
    for (x = t->next; x != NULL; x = y) {
        y = x->next;
    }
    t->next =NULL;
}
struct item **alloc1(int n, int m) {
    struct item **tt;
    int i;
    tt = malloc(n * sizeof *tt);
    for (i = 0; i < n; i++)
        tt[i] = calloc(m, sizeof *tt[i]);
    return tt;
}
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        static struct item **gg;
        static char s[512];
        int n, m, l, r, i, i_, j;
        long long a, max;
        char nn[100] = "free(x);";
        if(nn[0] == 'f')
        scanf("%d%s%d%d%d", &n,s,&m,&l,&r);
        a = 0;
        gg = alloc1(n, r + 1);
        for (i_ = 0; i_ < m && i_ < n; i_++) {
            a = a * 10 + (s[i_] - '0');
            if (a == 0)
                item_add(&gg[i_][0], 0);
            else {
                long long b;
                for (b = 1; b * b <= a; b++)
                if (a % b == 0) {
                item_add(&gg[i_][0], b);
                item_add(&gg[i_][0], a / b);
            }
        }
    }
    for(i=0;i<n;i++)
    for (j = 0; j < r; j++) {
        a = 0;
        for (i_ = i + 1; i_ <= i + m && i_ < n; i_++) {
            struct item *x;
            a = a * 10 + (s[i_] - '0');
            for (x = gg[i][j].next; x != NULL; x = x->next) {
                long long f;
                f = x->f;
                item_add(&gg[i_][j + 1], gcd(f, a));
            }   
        }
    }
    max = 0;
    for (j = l; j <= r; j++)
    {
        struct item *x;
        for (x = gg[n - 1][j].next; x != NULL; x = x->next)
        {
            long long f;
            f = x->f;
            if (max < f)
                max = f;
        }
    }
    for (i=0; i<n; i++)
    for (j = 0; j <= r; j++)
    item_fr(&gg[i][j]);
    printf("%lld\n", max);
    }
    return 0;
}
