#include <stdio.h>
int main()
{
	char X,Y;
	scanf("%c %c",&X,&Y);
	if(X>Y)
	printf(">");
	if(X<Y)
	printf("<");
	if(X==Y)
	printf("=");
	return 0;
}
