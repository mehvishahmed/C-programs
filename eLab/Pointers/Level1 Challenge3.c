#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int *xptr, *yptr;
    xptr=&x;
    yptr=&y;
    int *large;
    if(*xptr > *yptr)
        large=xptr;
    else large = yptr;
    printf("%d", *large);
	return 0;
}
