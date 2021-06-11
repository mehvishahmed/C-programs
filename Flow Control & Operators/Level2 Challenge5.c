#include <stdio.h>
int main()
{
    int month,numofdays;
    float roomrent,renttopay;
    scanf("%d\n%f\n%d",&month,&roomrent,&numofdays);
    if (month==4 || month==5)
        renttopay=(roomrent*numofdays)*120/100;
    else
        renttopay=roomrent*numofdays;
    printf("Rs.%.2f",renttopay);
    return 0;
}
