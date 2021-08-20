#include <stdio.h>
int main()
{
    char S[100];
    int t,i,r,u,d,n;
    int l;
    scanf("%d",&t);
    while(t--)
    {
        int H[100]={};
        scanf("%d",&n);
        scanf("%s",S);
        for(i=0;i<n;i++)
        {
            if(S[i]=='R'&&S[i-1]!='L'&&S[i-1]!='R')
                H[S[i]-65]++;
            else if(S[i]=='L'&&S[i-1]!='R'&&S[i-1]!='L')
                H[S[i]-65]++;
            if(S[i]=='U'&&S[i-1]!='U'&&S[i-1]!='D')
                H[S[i]-65]++;
            if(S[i]=='D'&&S[i-1]!='U')
                H[S[i]-65]++;
        }
        l=H[76-65];
        r=H[82-65];
        u=H[85-65];
        d=H[68-65];
        printf("%d %d\n",r-l,u-d);
    }
	  return 0;
}
