#include <stdio.h>
int main()
{
    int a1,a2,a3,c1,c2,c3;
    scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&c1,&c2,&c3);
    if (a1>=a2 && a2>a3 && c1>=c2 && c2>c3)
    {
        printf("FAIR");
    }
    else if (a3>=a2 && a2>a1 && c3>=c2 && c2>c1)
    {
            printf("FAIR");
    }
    else if (a1>=a3 && a2>a1 && c1>=c3 && c2>c1)
        printf("FAIR");
    else if (a3>=a1 && a1>a2 && c3>=c1 && c1>c2)
        printf("FAIR");
    else printf("NOT FAIR");
	return 0;
}
