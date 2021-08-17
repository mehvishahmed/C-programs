#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   
        char j[1000];char s[1000];
        int i,p,n,m,cnt=0;
        scanf("%s",j);
        scanf("%s",s);
        n=strlen(j);
        m=strlen(s);
        for(p=0;p<m;p++)
            for(i=0;i<n;i++)
                if(s[p]==j[i])
                {
                    ++cnt;
                    break;
                }
            printf("%d\n",cnt);
    }
    return 0;
}
