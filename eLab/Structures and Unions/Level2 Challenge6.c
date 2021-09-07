#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Attendance 
{
    char name[100];
    char place[100];
    int x;
};
int compare(const void* p, const void* q)
{
    return strcmp(((struct Attendance*)p)->name, ((struct Attendance*)q)->name);
}
int main()
{   
    struct Attendance t;
    t.x = 0;
    int n,i;
    scanf("%d",&n);
    struct Attendance s[n];
    for(i =0;i<n;i++)
        scanf("%s %s",s[i].name,s[i].place);
    qsort(s, n, sizeof(struct Attendance), compare);
    for(i =0; i < n; i++)
    {
        printf("%s-%s",s[i].name,s[i].place+t.x);
        printf("\n");
    }
	return 0;
}
