#include<stdio.h>
#include<string.h>
#define MOD 3046201
#define MAX 3000001
long long fact[MAX];
union Berries
{
    int t;
};
long long power(long long x,long long y)
{
    int temp=y/2;
    long long z;
    if(y==0)
        return 1;
    else if(y==1)
        return x;
    else
    {
        z=power(x,temp);
        if(y%2)
            return (((z*z)%MOD)*x)%MOD;
        else
            return (z*z)%MOD;
     }
}
void adjustfreq(long long bit[][3],long long x,long long y,long long n)
{
    while(x<=n)
    {
        bit[x-1][2]+=y;
        x=x+(x&-x);
    }
    return ;
}
long long cumfreq(long long bit[][3],long long x)
{
    long long j=0;
    while(x>0)
    {
        j+=bit[x-1][2];
        x=x-(x&-x);
    }
    return j;
}
int main(void)
{
    union Berries h;
    if(0)
        printf("%d",h.t=1);
    long long n,i,j,k;
    long long x,m;
    fact[0]=1;
    for(i=1;i<=MAX-1;i++)
    {
        x=i;
        fact[i]=(fact[i-1]*x)%MOD;
    }
    scanf("%lld",&n);
    long long bit[n][3];
    for(i=0;i<=n-1;i++)
    scanf("%lld",&bit[i][0]);
    bit[0][1]=bit[0][0];
    for(i=1;i<=n-1;i++)
        bit[i][1]=bit[i-1][1]+bit[i][0];
    for(i=0;i<=n-1;i++)
    {
        bit[i][2]=0;
        j=i+1;
        j=j-(j&-j)+1;
        for(k=j;k<=i+1;k++)
        bit[i][2]+=bit[k-1][0];
    }
    long long t;
    char arr[10];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("\n%s%lld%lld",arr,&i,&j);
        if(strcmp(arr,"query")==0)
        {

            long long a,b,c,d,p,q,r;
            a=cumfreq(bit,j)-cumfreq(bit,i-1);
            m=j-i+1;
            c=a%m;
            d=m-c;
            b=a/m;
            p=(fact[m]*fact[a])%MOD;
            q=(fact[c]*fact[m-c])%MOD;
            r=(power(fact[b+1],c)*power(fact[b],d))%MOD;
            q=(q*r)%MOD;
            p=((p%MOD)*(power(q,MOD-2)%MOD))%MOD;
            printf("%lld\n",p);
        }
        else if(strcmp(arr,"change")==0)
        { k=cumfreq(bit,i)-cumfreq(bit,i-1);
            adjustfreq(bit,i,j-k,n);}}    
            return 0;
}
