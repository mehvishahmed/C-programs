#include <stdio.h>
int main()
{
    int travelmode;
    scanf("%d",&travelmode);
    switch(travelmode)
    {
        case (1):
            printf("Car is booked");
            break;
        case(2):
            printf("Bus is booked");
            break;
        case(3):
            printf("Flight is booked");
            break;
        default:
            printf("Invalid Request");
    }
	return 0;
}
