#include <stdio.h>
int main()
{
    int ndays,y,m,d;
    scanf("%d",&ndays);
    y=ndays/365;
    m=(ndays%365)/30;
    d=(ndays%365)%30;
    printf("%d Y(s) %d M(s) %d D(s)",y,m,d);
    return 0;
}
