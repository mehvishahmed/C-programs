#include <stdio.h>
int main()
{
    long long int s,c,k,o=1,n;
    scanf("%lld%lld%lld",&s,&c,&k);
    n=s>=k?(o<<(s-k+1))|1:0;
    if(k==1)
    {
        if(s<=1)
            n+=c>0?(o<<(c+1))-2:0;
        else
            n+=c>s?(o<<(c+1))-(o<<s):0;
    }
    else
        n+=s-k>=0 && s-k<c?o<<(s-k+1):0;
    printf("%lld",n);
	return 0;
}
