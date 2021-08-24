#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter the first string : ");
    gets(s1);
    printf("Enter the second string : ");
    gets(s2);
    if(strcmp(s1,s2)==0)
        printf("The strings are the same");
    else
        printf("The strings are different");
    return 0;
}
