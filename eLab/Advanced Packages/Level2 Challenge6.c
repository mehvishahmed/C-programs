#include <stdio.h>
#include<stdlib.h>
int exists(int, int);
void paranthesis(int, int);
struct para{
    int n,k;
};
typedef struct para para;
int main()
{
    int t, flag;
    int i = 0;
    scanf("%d", &t);
    para* p = (para*)malloc(t*sizeof(para));
    while(t>0 && i<t)
    {
        scanf("%d%d", &p[i].n, &p[i].k);
        i++;
    }
    for(i = 0; i<t; i++)
    {
        flag = exists(p[i].n, p[i].k);
        if(flag)
            paranthesis(p[i].n, p[i].k);
        else
        {
            int e = -1;
            printf("%d\n", e);
        }
    }
    return 0;
}
int exists(int n, int k)
{
    if((n%2==0) && (n!=0)){
        if(k!=2 && k!=4 && n!=k)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
void paranthesis(int n, int k)
{
    int a = k-2;
    int b = n/a;
    int c = n%a;
    int d = 0,i;
    if(a+c == k)
    {
        printf("(");
        while(d!=b)
        {
            for(i = 1; i<=a; i++)
            {
                if(i<=a/2)
                    printf("(");
                else
                    printf(")");
            }
            d++;
        }
        printf(")\n");
        return;
    }
    while(d!=b)
    {
        for(i = 1; i<=a; i++)
        {
            if(i<=a/2)
                printf("(");
            else
                printf(")");
        }
        d++;
    }
    for(i = 1; i<=c; i++)
    {
        if(i<=c/2)
            printf("(");
        else
            printf(")");
    }
    printf("\n");
}
