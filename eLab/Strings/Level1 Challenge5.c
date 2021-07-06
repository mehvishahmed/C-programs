#include <stdio.h>
#include <string.h>
int main()
{
    char str[100002];
    int t,countA,countB,length,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        countA=countB=0;
        length=strlen(str);
        for(i=0;i<length;i++)
        {
            if(str[i]=='0')
                ++countA;
            else
                ++countB;
        }
        if(countB==length-1 || countA==length-1)
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}
