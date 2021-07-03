#include <stdio.h>
int main()
{
    int d1,d2,m1,m2,y1,y2;
    int fine;
    scanf("%d %d %d\n%d %d %d",&d1,&m1,&y1,&d2,&m2,&y2);
	if(y1!=y2)
	{
	   fine=10000;
	}
	else if(m1!=m2)
	{
	    fine=500*(m1-m2);
	}
	else if(d1!=d2)
	{
	    fine=15*(d1-d2);
	}
	else
	{
	    fine=0;
	}
	printf("%d",fine);
	return 0;
}
