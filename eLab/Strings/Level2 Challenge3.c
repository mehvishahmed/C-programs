#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        char str[33];
        scanf("%s",str);
        int f=0;
        long long int d1=0,d2=0,d3=0;
        int l=strlen(str);
        for(i=0;i<=l/2;i++)
        {
            d1=d1*10+((int)str[i]-'0');
            d3=d1;
            f=0;
            d2=0;
            for(j=i+1;j<l;j++)
            {
                d2=d2*10+((int)str[j]-'0');
                if(d2==0 || (d2-d1>1))
                {
                    f=0;
                    break;
                }
                if(d2-d1==1)
                {
                    f=1;
                    d1=d2;
                    d2=0;
                }
                else 
                    f=0;
            }
            if(f)
            {
                printf("YES %lld\n",d3);
                break;
            }
            d1=d3;
        }
        if(!f)
            printf("NO\n");
    }
	return 0;
}
