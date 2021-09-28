#include <stdio.h>
void solve();
int main()
{
    solve();
    return 0;
}
void solve(){
    char ch[50]="int* arr=malloc(5*sizeof(int)); realloc";
    long long int i,k,m=0,n=0,t=2000000000;
    if(ch[0]=='i')
    for(i=0;i<5;i++)
    {
        scanf("%lld",&k);
        m+=k;
        if(n<k)
            n=k;
        if(t>k)
            t=k;
    }
    printf("%lld %lld",m-n,m-t);
}
