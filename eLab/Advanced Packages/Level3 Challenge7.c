#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>
#define gcu getchar
int scan()
{
    register int v1 = 0;
    char c;
    bool ng = 0;
    c = gcu();
    if( c== '-')
    ng = 1;
    while(c < '0' || c > '9')
    c = gcu();
    while(c >= '0' && c <='9')
    {
    v1 = (v1 << 3) + (v1 << 1) + c - '0';
    c = gcu();
    }
    if (ng)
    v1 = -v1;
    return v1;
    }
    int *adj[100001],*sz,ans;
    bool *a,*b,*mrk;
    void dfs(int cur,int pr,bool m1,bool m2)
    {
    if((m1^a[cur])!= b[cur])
    { ++ans;
    mrk[cur]=1;
    m1^=1;
    }
    int i;
    for(i=0;i<sz[cur];++i)
    { if(adj[cur][i]!=pr)
    {
    dfs(adj[cur][i],cur,m2,m1);}}}
    void solve()
    {
    int n = scan(),m =n++,i,j;
    sz = (int *)calloc(n,sizeof(int));
    a = (bool *)malloc(n*sizeof(bool));
    b=(bool *)malloc(n*sizeof(bool));
    mrk=(bool *)calloc(n,sizeof(bool));
    while(--m)
    {
    i = scan(),j=scan();
    ++sz[i];
    ++sz[j];
    adj[i] = (int *)realloc(adj[i], sz[i] * sizeof(int));
    adj[j] = (int *) realloc(adj[j], sz[j]* sizeof(int));
    adj[i][sz[i]-1]= j;
    adj[j][sz[j]-1] = i;}
    for(i=1;i<n;++i) a[i] = scan();
    for(i=1;i<n;i++) b[i] = scan();
    dfs(1,0,0,0);
    printf("%d\n",ans);
    for(i=1; ans && i < n;++i)
    { if(mrk[i])
    printf("%d\n",i),--ans; }}
    int main()
    { solve(); return 0;}
