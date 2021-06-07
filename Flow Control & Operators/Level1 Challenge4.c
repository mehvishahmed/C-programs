#include <stdio.h>
int main()
{
    int l,b,area,peri;
    scanf("%d",&l);
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    if (area>peri){
        printf("Area\n%d",area);
    }
    else if (peri>area){printf("Peri\n%d",peri);}
    else
        { printf("Eq\n%d",area);}
	return 0;
}
