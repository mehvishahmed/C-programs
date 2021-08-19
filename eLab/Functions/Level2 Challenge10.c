#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int AbsoluteDiff(int a, int b);
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[10000];
        scanf("%s",str);
        int len=strlen(str);
        int res=0,i;
        for(i=0;i<len/2;i++)
            res+=abs(str[i]-str[len-i-1]);
        printf("%d\n",res);
    }    
}
