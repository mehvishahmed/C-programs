#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define N 100001
int min(int a, int b){
    return a < b ? a : b;}
int max(int a, int b){
    return a > b ? a : b;}
int aa[10],nn[N],dd[6 * N],ff[6 * N], id[6 * N];
int comp(const void* a, const void *b){
    int i = *(int *)a, j = *(int *)b;
    return (dd[i] < dd[j]) ? -1 : ((dd[i] == dd[j] && ff[i] < ff[j]) ? -1 : 1); }
int compS(const void* a, const void *b){
    return *(int *)a - *(int *)b; }
int main(){
    int x,y,i = 0,a,n,mx,res,tmp, pos[N],mat[N][6];
    for(x = 0; x < 6; x++)
        scanf("%d",&aa[x]);
    qsort(aa, 6, sizeof(int), compS);
    for(x = 0; x < 3; x++){
        tmp = aa[x];
        aa[x] = aa[5 - x];
        aa[5 - x] = tmp;}
    scanf("%d",&n);
    for(x = 0; x < n; x++)
        scanf("%d",&nn[x]);
    qsort(nn, n, sizeof(int), compS);
    for(x = 0; x < 6*n; x++)
        id[x] = x;
    for(x = 0; x < n; x++)
    {
       for(y = 0; y < 6; y++){
            dd[i] = mat[x][y] = nn[x] - aa[y];
            ff[i++] = x;}      
    }
    for(x = 0; x < n; x++)
        pos[x] = 0;
    qsort(id, i, sizeof(int), comp);
    mx = mat[n-1][0];
    res = mat[n-1][0] - mat[0][0];
    for(x = 0; x < i; x++)
    {
    a = id[x];
    if(pos[ff[a]] == 5)
        break;
    mx = max(mx, mat[ ff[a] ][ ++pos[ff[a]] ]);
    res = min(res, mx - dd[id[x+1]]);
    }
    printf("%d\n",res);
    return 0;
}
