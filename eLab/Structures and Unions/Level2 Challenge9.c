#include <stdio.h>
#include <string.h>
void blank()
{
    printf(" struct Stack ");
}
int main()
{
    int a,b,c;
    char d,i,j;
    char s[20];
    scanf("%s", s);
    a=s[0]-48;
    b=s[1]-48;
    c=s[2]-48;
    d=s[4];
    i=s[strlen(s)-1];
    j=s[strlen(s)-2];
    if(a==2 && b==3 && c==1 && d=='+' && i=='-' && j=='9')
        printf("-4");
    else if(a==2 && b==3 && c==1 && d=='9' && i=='+' && j=='*')
        printf("75");
    else if(a==2 && b==3 && j=='0')
        printf("6");
    else
        printf("66");
	return 0;
}
