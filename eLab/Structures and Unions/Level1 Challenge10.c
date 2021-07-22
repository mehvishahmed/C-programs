#include <stdio.h>
union Citizen
{
    int age;
};
int main()
{
    union Citizen E;
    scanf("%d", &E.age);
    if((E.age > 18) && (E.age <= 100))
        printf("Eligible");
    else printf("Not Eligible");
	return 0;
}
