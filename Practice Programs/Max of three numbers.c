//MAX OF THREE NUMBERS
#include<stdio.h>
#include<stdlib.h>

int max(int n1, int n2, int n3)
{
    int result;
    if(n1 >= n2 && n1 >= n3)
    {
        result = n1;
    }
    else if(n2>=n1 && n2>=n3)
    {
        result = n2;
    }
    else
    {
        result=n3;
    }
}
int main()
{
    printf("%d", max(1,2,3));
    return 0;
}
