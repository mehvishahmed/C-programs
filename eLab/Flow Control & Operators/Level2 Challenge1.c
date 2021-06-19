#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (x<y)
    ((y-x)%2!=0)?printf("1"):printf("2");
    else if (x>y)
    ((x-y)%2==0)?printf("1"):printf("2");
    return 0;
}
