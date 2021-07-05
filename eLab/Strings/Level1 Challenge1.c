#include <stdio.h>
#include <string.h>
int main()
{
    int t,n,i;
    char s[100],r[100];
    scanf("%d",&t);
    while(t--)
    {
        int count1=0,count2=0;
        scanf("%d",&n);
        scanf("%s%s",s,r);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')
                count1++;
            if(r[i]=='1')
                count2++;
        }
        if(count1==count2)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
