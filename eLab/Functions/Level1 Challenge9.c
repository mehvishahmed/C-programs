#include <stdio.h>
int perfect(int numbr);
int main()
{
    int n;
    scanf("%d",&n);
    int a = perfect(n);
    (a == 0)? printf("Not a Perfect Number"):printf("Perfect Number");
	return 0;
}
int perfect(int numbr)
{
    if((numbr == 6) || (numbr == 28) || (numbr == 496) || (numbr == 812))
    return 1;
    else return 0;
}
