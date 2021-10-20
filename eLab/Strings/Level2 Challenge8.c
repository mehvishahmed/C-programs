#include <stdio.h>
#include <string.h>
int main()
{
    char K[105];
    char t[]=" ";
    int n,v,i;
    char c='a';
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&v);
        for(i=v;i>=0;i--)
            printf("%c",(c+i));
        strcat(K,t);
        printf("\n");
        n--;
    }
	return 0;
}
