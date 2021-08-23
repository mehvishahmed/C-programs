#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],s2[10];
    printf("Enter your first name : ");
    gets(s1);
    printf("Enter your last name : ");
    gets(s2);
    strcat(s1,s2);
    printf("Your name is : ");
    puts(s1);
    return 0;
}
