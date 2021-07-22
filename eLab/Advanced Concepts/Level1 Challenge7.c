#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t,i,j,l,p;
    static int n;
    char num[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",num);
        j=0,t=0,l=0;
        l=strlen(num);
        p=atoi(num);
        while(j<=l)
        {
            if(num[j] == '2' && num[j+1] == '1')
            t++;
            j++;
        }
        if((t>=1) || (p%21 == 0))
        printf("SAVE ME\n");
        else printf("I AM SAFE\n");
    }

	return 0;
}
