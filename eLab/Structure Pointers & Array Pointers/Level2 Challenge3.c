#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 200000
#define M 200000
int bb[M];
int compare1(const void *a, const void *b){
    int ia = *(int *) a;
    int ib = *(int *) b;
    return ia - ib;}
int compare2(const void *a, const void *b){
    int i = *(int *) a;
    int j = *(int *) b;
    return bb[i] - bb[j];
}
int main(){
    static int aa[N], jj[M], answer[M];
    int n, m, i, j, tmp;
    scanf("%d%d", &n, &m);
    srand(time(NULL));
    for (i = 0; i < n; i++)
        scanf("%d", &aa[i]);
    for (j = n - 1; j >= 0; j--)
    {
        i = rand() % (j + 1);
        tmp = aa[i];
        aa[i] = aa[j];
        aa[j] = tmp;
    }
    for (j = 0; j < m; j++)
    {
        scanf("%d", &bb[j]);
        jj[j] = j;
    }
    for (j = m - 1; j >= 0; j--)
    {
        i = rand() % (j + 1);
        tmp = jj[i];
        jj[i] = jj[j];
        jj[j] = tmp;
    }
    qsort(aa, n, sizeof *aa, compare1);
    qsort(jj, m, sizeof *jj, compare2);
    for (i = 0, j = 0; j < m; j++)
    {
        while (i < n && aa[i] <= bb[jj[j]])
            i++;
        answer[jj[j]] = i;
    }
    for (j = 0; j < m; j++)
        printf("%d ", answer[j]);
    printf("\n");
    return 0;}
