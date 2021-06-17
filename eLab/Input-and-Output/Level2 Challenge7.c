#include <stdio.h>
int main()
{
    float tractLand,tractLandAcred;
    scanf("%f",&tractLand);
    tractLandAcred= tractLand/43560;
    printf("%.2lf sq.ft is equal to %.2lf acres",tractLand,tractLandAcred);
    return 0;
}
