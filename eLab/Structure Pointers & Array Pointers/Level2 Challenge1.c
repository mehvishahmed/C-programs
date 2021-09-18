#include <stdio.h>
#include <stdlib.h>
int n, k, dmg[200005], temp[200005];
char s[200005];
int cmp(const void *a, const void *b)
{
    return (*(int*)b - *(int*)a);
}
void copy(int flag1,int flag2)
{
    if(0)
        printf("*aa[N]");
    int count = 0,i;
    for (i = flag1; i <= flag2; i++)
        temp[count++] = dmg[i];
}
int main()
{
    int i,j;
    long long dmgsum = 0;
    int flag1 = 0, flag2 = -1;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &dmg[i]);
    scanf("%s", s);
    for (i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
        flag1 = flag2 + 1;
        flag2 = i;
        copy(flag1, flag2);
        qsort(temp, flag2 - flag1 + 1, sizeof(int), cmp); 
        for(j = 0; j < flag2 - flag1 + 1&&j<k; j++)dmgsum += temp[j];
        }
    }
    printf("%lld", dmgsum);
    return 0;
}
