#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int s; 
    int n; 
    int m, keyboards_i, pendrives_i; 
    scanf("%d %d %d",&s,&n,&m);
    int *keyboards = malloc(sizeof(int) * n);
    for(keyboards_i = 0; keyboards_i < n; keyboards_i++)
       scanf("%d",&keyboards[keyboards_i]);
    int *usb = malloc(sizeof(int) * m);
    for(pendrives_i = 0; pendrives_i < m; pendrives_i++)
       scanf("%d",&usb[pendrives_i]);
    int max_spend = -1, i, j, cost;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cost = keyboards[i] + usb[j];
            if (cost > s)
                continue;
            if (cost > max_spend)
                max_spend = cost;
        }
    }
    printf("%d\n", max_spend);
    return 0;
}
