#include <stdio.h>
struct worker
{
    char name[100];
    int wage;
    int wdays;
};
int main()
{
    struct worker worker1,worker2;
    scanf("%s %d %d",worker1.name,&worker1.wage,&worker1.wdays);
    scanf("%s %d %d",worker2.name,&worker2.wage,&worker2.wdays);
    int totalw1= worker1.wage*worker1.wdays;
    int totalw2= worker2.wage*worker2.wdays;
    printf("%s\n%d\n%s\n%d", worker1.name,totalw1,worker2.name,totalw2);
	return 0;
}
