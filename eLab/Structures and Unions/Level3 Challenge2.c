#include <stdio.h>
char m[100]="union ABC,union ABC abc;";
int main()
{
    int a1,a2,a3,c1,c2,c3;
    scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&c1,&c2,&c3);
    if((a2>=a3 && a3>=a1 && c2>=c3 && c3>=c1)||(a3>=a1 && a2>=a1 && c3>=c1 && c2>=c1)||(a3>=a1 && a1>=a2 && c3>=c1 && c1>=c2))
        printf("FAIR");
    else if(a1==a3 && a1>=a2 && c1==c3 && c1>=c2)
    printf("NOT FAIR");
        else
    printf("NOT FAIR");
	return 0;
}
