#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void substring(char s[],char sub[],int p,int l)
{
    int c=0;
    while(c<l)
    {
        sub[c]=s[p+c];
        c++;
    }
    sub[c]='\0';
}
int main()
{
    int ch=0;
    char digitonwb[1000002],c[10];
    scanf("%s",digitonwb);
    int i,j,l=strlen(digitonwb);
    for(i=0;i<l;i++)
    {
        for(j=1;j<=l-i;j++)
        {
            substring(digitonwb,c,i,j);
            if(atoi(c)%8==0)  ch++;
        }
    }
    printf("%d",ch);
	return 0;
}
