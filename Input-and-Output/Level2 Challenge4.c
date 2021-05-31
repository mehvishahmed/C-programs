#include <stdio.h>
int main()
{
    int sec,h,m,s;
    scanf("%d",&sec);
    h=sec/(60*60);
    int b=sec-(3600*h);
    m=b/60;
    s=b-(60*m);
    printf("%dH:%dM:%dS",h,m,s);
    return 0;
}
