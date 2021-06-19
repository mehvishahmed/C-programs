#include <stdio.h>
int main()
{
    double n,v1,v2;
    scanf("%le %le %le",&n,&v1,&v2);
    int t1=n/v1;
    int t2=n/v2;
	if (t1>t2)
	{
	    printf("Elevator");
	}
	else 
	    printf("Stairs");
    return 0;
}
