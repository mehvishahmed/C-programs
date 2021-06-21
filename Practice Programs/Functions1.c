#include <stdio.h>
void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}

int main()
{
    sayHi("Mehvish", 19);
    sayHi("Ayaan", 21);
    sayHi("Nazia", 40);
    return 0;
}
