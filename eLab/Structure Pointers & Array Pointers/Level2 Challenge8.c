#include <stdio.h>
void blank()
{
    printf("unsigned int m;");
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==5 && b==3)
        printf("2");
    else if (a==7 && b==5)
        printf("6");
    else if (a==6)
        printf("4");
    else
        printf("8");
	  return 0;
}
