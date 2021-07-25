#include <stdio.h>
int main()
{
    double x, y;
    printf("Infinite loop !!\n");
    read:
        printf("Enter the number to square root: \n");
        scanf("%lf", &x);
        if (x<0) goto read;
        y = sqrt(x);
        printf("Square root of %lf is %lf.\n", x, y);
        goto read;
    return 0;
}
