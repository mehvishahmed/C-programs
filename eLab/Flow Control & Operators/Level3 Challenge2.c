#include <stdio.h>
int main()
{
    char g;
    scanf("%c",&g);
    switch(g)
    {
        case 'M':
        case 'm':
            printf("Male");
            break;
        case 'F':
        case 'f':
            printf("Female");
            break;
        default:
            printf("Unspecified Gender");
            break;
    }
  return 0;
}
