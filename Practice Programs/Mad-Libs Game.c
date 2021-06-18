#include <stdio.h>
int main()
{
    char color[20], pluralNoun[20], celeb[20];
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity (FirstName_LastName): ");
    scanf("%s", celeb);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celeb);
    return 0;
}
