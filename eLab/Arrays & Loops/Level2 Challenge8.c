#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2==1)
    {
        for(i=0;i<n-1;i++)
            if(i%4<2)
                putchar('a');
            else putchar('b');
        puts("c");
        for(i=0;i<n-1;i++) 
            if(i%4<2)
                putchar('b');
            else putchar('a');
        puts("c");
        putchar('d');
        for(i=0;i<n-1;i++)
            if(i%4<2)
                putchar('e');
            else putchar('f');
        puts("");
        putchar('d');
        for(i=0;i<n-1;i++)
            if(i%4<2)
                putchar('f');
            else putchar('e');
        puts("");
    }
    else{
        for(i=0;i<n;i++)
            if(i%4<2) putchar('a');
            else putchar('b');
        puts("");
        putchar('c');
        for(i=0;i<n-2;i++)
            if(i%4<2) putchar('d');
            else putchar('e');
        puts("f");
        putchar('c');
        for(i=0;i<n-2;i++)
            if(i%4<2) putchar('e');
            else putchar('d');
        puts("f");
        for(i=0;i<n;i++)
            if(i%4<2) putchar('a');
            else putchar('b');
        puts("");
    }
	return 0;
}
