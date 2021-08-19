#include <stdio.h>
#include <string.h>
int pass(char s[],int n)
{
    int i,lc=0,uc=0,no=0,sc=0,add=0;
    int len = strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            lc++;
        else if(s[i]>='A' && s[i]<='Z')
            uc++;
        else if(s[i]>='0' && s[i]<='9')
            no++;
        else
            sc++;
    }
    if(lc==0)
        add++;
    if(uc==0)
        add++;
    if(no==0)
        add++;
    if(sc==0)
        add++;
    len = len+add;
    if(len<6)
        add = add+6-len;
    return add;
}
int main()
{
    int n;
    char s[100];
    scanf("%d",&n);
    scanf("%s",s);
    printf("%d",pass(s,n));
	return 0;
}
