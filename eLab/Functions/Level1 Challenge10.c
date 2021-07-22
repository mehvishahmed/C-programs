#include <stdio.h>
int leap(int y);
int main()
{
    int n;
    scanf("%d",&n);
    int r = leap(n);
    (r == 1)? printf("Leap Year"):printf("Not a Leap Year");
	return 0;
}
int leap(int y)
{
    if((y%400 == 0) || (y%4==0))
        return 1;
    else
        return 0;
}
