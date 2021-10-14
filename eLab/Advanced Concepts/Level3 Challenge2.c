#include<stdio.h>
#include<string.h>
int main()
{
    long long i,j,k,t,n,p=0;
    char str[100001];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%lld",str,&t);
        k = strlen(str);
        char sty[t][100001];
        for(j=0; j<t; j++)
            scanf("%s",sty[j]);
        if(k!=t)
            printf("NO\n");
        else
        {
            for(j=0; j<t; j++)
            {
           
                if(strchr(sty[j],str[j]))
                    p=1;
                else
                {
                    p = 0;
                    break;
                }
            }
            if(p==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
