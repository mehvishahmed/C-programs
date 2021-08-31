#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,a;
	scanf("%d %d %d",&n,&m,&a);
	printf("%d",(int)(ceil((float)n/a)*ceil((float)m/a)));
	return 0;
}
