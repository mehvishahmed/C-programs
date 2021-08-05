#include <stdio.h>
int main()
{
    int i, j, flag;
    for(i=2 ; i<50 ; i++)
    {
        flag=1;
        for(j = 2 ; j <= (i/2); j++)
        {
            if(i%j==0){
                flag=0;
                break;}
        }
        if(flag==1)
            printf("%d is prime\n", i);
    }
    return 0;
}
