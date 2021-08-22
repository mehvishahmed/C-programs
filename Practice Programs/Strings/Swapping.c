#include <stdio.h>
#include <string.h>
int main()
{
    char b[10]="Good";
    char c[10]="Bad";
    char t[10];
    printf("Before swapping\n");
    printf("b = %s\n",b);
    printf("c = %s\n",c);
    strcpy(t,b);
    strcpy(b,c);
    strcpy(c,t);
    printf("After swapping\n");
    printf("b = %s\n",b);
    printf("c = %s\n",c);
    return 0;
}
