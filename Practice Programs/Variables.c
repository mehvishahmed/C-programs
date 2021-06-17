#include <stdio.h>
int main()
{
    char charName[] = "John Doe";
    int charAge=50;
    printf("There once was a man named %s\n",charName);
    printf("he was %d years old.\n\n",charAge);
    printf("He really liked the name %s,\n",charName);
    printf("but did not like being %d.",charAge);
    return 0;
}
