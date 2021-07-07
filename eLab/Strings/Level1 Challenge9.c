#include <stdio.h>
#include <string.h>
int main(){
    char s[100001];
    int i,t,l,del;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        del=0;
        for(i=0; i<l-1; i++)
        {
            if(s[i]==s[i+1])
                del++;
        }
        printf("%d\n",del);
    }
	  return 0;
}
