#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{   
    int c,f;
    char*vars[1000000], string[101];
    long int i,t,j,k;
    scanf("%ld",&t);
    k=0;
    c=getchar();
    for(i=0;i<t;i++)
    {
        c=getchar();
        while(c!='\n' && c!= EOF)
        {
            if(c>='a' && c<='z')
            {
                f=0;
                while(c>='a' && c<='z')
                {
                    string[f++] = c;
                    c=getchar();
                }
                string[f] = '\0';
                for(j=0;j<k;j++)
                {
                    if(strcmp(string,vars[j])==0)
                    break;
                }
                if(j==k)
                {
                    vars[k] = (char *)malloc(sizeof(char)*(strlen(string)+1));
                    strcpy(vars[k],string);
                    k++;
                }
            }
            else c=getchar();
        }
    }
    printf("%ld",k);
	return 0;
}
