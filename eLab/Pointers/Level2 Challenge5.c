#include <stdio.h>
#include <stdlib.h>
int i,j;
int l[2001] = {},r[2001] = {},u[2001] = {},d[2001] = {};
int lh[2001][2001] = {};
int hh[2001][2001] = {};
int main()
{
    int len,k;
    scanf("%d%d",&len,&k);
    for(i = 0; i < 2001;i++){
        l[i] = r[i] = u[i] = d[i] = -1;
    }
    for(i = 0; i < len; i++)
    {
        char *monk = (char *)malloc(sizeof(char)*2001);
        scanf("%s",monk);
        for(j = 0; j < len; j++)
        {
            if(monk[j] == 'B')
            {
                if(l[i] == -1){
                    l[i] = j;
                }
                r[i] = j;
                if(u[j] == -1){
                    u[j] = i;
                }
                d[j] = i;
            }
        }
    }
    int have = 0;
    for(i = 0; i < len; i++)
    {
        if(l[i] == -1){
            have += 1;
        }
        if(u[i] == -1){
            have += 1;
        }
    }
    for(i = 0; i + k - 1 < len; i++)
    {
        for(j = 0; j < k; j++)
        {
            if(u[j] != -1 && u[j] >= i && d[j] <= i + k - 1){
                lh[i][0] += 1;
            }
        }
        for(j = 1; j + k - 1 < len; j++)
        {
            lh[i][j] = lh[i][j - 1];
            if(u[j - 1] != -1 && u[j - 1] >= i && d[j - 1] <= i + k - 1){
                lh[i][j] -=1;
            }
            if(u[j+k-1] != -1 && u[j+k-1] >= i && d[j+k-1] <= i + k - 1){
                lh[i][j] += 1; 
            }
        }
    }
    for(i = 0; i + k - 1 < len; i++)
    {
        for(j = 0; j < k; j++)
        {
            if(l[j] != -1 && l[j] >= i && r[j] <= i + k - 1){
                hh[0][i] += 1;
            }
        }
        for(j = 1; j + k - 1 < len ;j++)
        {
            hh[j][i] = hh[j-1][i];
            if(l[j - 1] != -1 && l[j - 1] >= i && r[j - 1] <= i + k - 1){
                hh[j][i] -= 1;
            }
            if(l[j+k-1] != -1 && l[j+k-1] >= i && r[j+k-1] <= i + k - 1){
                hh[j][i] += 1;
            }
        }
    }
    int max = 0;
    for(i = 0; i + k - 1 < len; i++)
    {
        for(j = 0; j + k - 1< len; j++)
        {
            if(max<lh[i][j]+hh[i][j]){
                max=lh[i][j]+hh[i][j];
            }
        }
    }
    printf("%d",max+have);
	return 0;
}
