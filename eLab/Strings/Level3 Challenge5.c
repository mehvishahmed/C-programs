#include <stdio.h>
#include <string.h>
int main()
{
    int t,n,i,j,k;
    char flowerstring[10][100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",flowerstring[i]);
        n=strlen(flowerstring[i]);
        int temp=n;
        for(j=0;j<n;j++)
        {
            char str=flowerstring[i][j];
            for(k=j+1;k<n;k++)
            {
                if(str==flowerstring[i][k])
                    temp--;
            }
        }
        if(temp%2==0)
            printf("Grant Flower\n");
        else
            printf("Andy Flower\n");
    }
	return 0;
}
