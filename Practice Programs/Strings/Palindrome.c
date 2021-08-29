#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter a string: ");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    printf("The given string: %s\n",s1);
    printf("The reverse of the string: %s\n",s2);
    if(strcmp(s1,s2)==0)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
    return 0;
}
