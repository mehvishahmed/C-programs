#include <stdio.h>
struct Time
{
    int t,hours,minutes,seconds;
}startTime,stopTime,diff;
int main()
{
    startTime.hours=0;
    stopTime.minutes=0;
    diff.seconds=0;
    int h1,m1,s1,h2,m2,s2;
    scanf("%d%d%d\n%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
    printf("%d:%d:%d",h1-h2,m1-m2,s1-s2);
    return 0;
}
