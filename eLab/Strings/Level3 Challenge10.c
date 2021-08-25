#include <stdio.h>
#include <string.h>
int main(){
	char game[100000];
    int i=0,a=0,b=0,c=0,ans=0;
    scanf("%s",game);
    int len=strlen(game);
    while(i<len)
    {
        if(game[i]=='J')
            a++;
        else if(game[i]=='O')
        { 
            if(a>b)
                b++;
        }
        else if(game[i]=='K')
        {
    		if(b>c)
    		    c++;
        }
        else if(game[i]=='I')
        {
            if(c>ans) 
                ans++;
        }
        i+=1;
    }
    printf("%d\n", ans);
	return 0;
}
