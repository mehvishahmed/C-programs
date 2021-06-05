#include <stdio.h>
int main()
{
    float appleno;
    scanf("%f",&appleno);
    appleno=(int)appleno%10;
    printf("%.0f",appleno);
    return 0;
}
