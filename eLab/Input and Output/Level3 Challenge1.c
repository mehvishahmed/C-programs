#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    (abs(a-b)<=0.5)?printf("Approximate number"):printf("Not an Approximate number");
    return 0;
}
