#include <stdio.h>
#include <string.h>
int main()
{
    char ticketnumber[102];
    int n,l,a;
    scanf("%d",&n);
    while(n--)
    {
        a=1;
        int i;
        scanf("%s",ticketnumber);
        l=strlen(ticketnumber);
        for(i=2;i<l;i=i+2)
        {
            if(ticketnumber[i]!=ticketnumber[0])
                a=0;
            if(ticketnumber[i+1]!=ticketnumber[1])
                a=0;
        }
    (a==1)?printf("YES\n"):printf("NO\n");
    }
	  return 0;
}
