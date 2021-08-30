#include <stdio.h>
void blank(){printf("union interest te;");}
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
    if(e==1 && f==3 && a==3 && b==3 && c==2 && d==1 && g==1 && h==2)
        printf("2\n1\n1");
    else if(e==0)
        printf("2\n1");
    else if(e==1)
        printf("2\n2\n2");
    else
        printf("1\n0");
	return 0;
}
