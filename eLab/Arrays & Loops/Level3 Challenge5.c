#include <stdio.h>
int main()
{
    int t,k,d;
    scanf("%d", &t);
    while(t--)
    {
        int g=7;
        scanf("%d", &k);
        char a[66];
        a[0]=79;
        if(k>8)
        {
            for(d=1;d<k;d++)
                a[d] = 46;
            for(d=k;d<k+8+k%8;d++)
                a[d] = 88;
            for(d=k+8+k%8;d<64;d++)
                a[d] = 46;
        }
        else
        {
            for(d=1;d<k;d++)
                a[d] = 46;
            a[k]=88;
            for(d=k+1;d<8;d++)
                a[d] = 46;
            for(d=8;d<k+9;d++)
                a[d] = 88;
            for(d=k+9;d<64;d++)
                a[d] = 46;
        }
        for(d=0;d<64;d++)
        {
            printf("%c",a[d]);
            if(d==g)
                printf("\n"),g=g+8;
        }
    }
    return 0;
}
