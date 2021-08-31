#include<stdio.h>
int main()
{
	int n,m;
	int d;
	scanf("%d %d",&n,&m);
	d=(n-1+(1+2*(n-1))*(m-1));
	printf("%d",d);
	return 0;
}
