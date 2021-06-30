#include <stdio.h>
#include <stdlib.h>
int main()
{
    char line[100];
    char a;
    int i=0,j=0;
    printf("enter a line:\n\n");
    line[i]=getchar();
    while(line[i]!='\n')
    {
        i++;
        line[i]=getchar();
    }
    printf("The line you've entered is:\n\n");
    while(j<=i)
    {
        putchar(line[j]);
        j++;
    }
    return 0;
}
