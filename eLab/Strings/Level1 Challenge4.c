#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];char search[100];
    int t,i,j,len,c=0;
    scanf("%s",string);
    len=strlen(string);
    scanf("%d",&t);
    while(t--){
        c=0;
        scanf("%s",search);
        for(i=0;i<=strlen(string)-1;i++)
        {
            for(j=0;j<=strlen(search)-1;j++)
            {
                if(string[i]==search[j]){
                c++;
                break;}
            }
        }
        if(c==len)
            printf("Yes\n");
        else
            printf("No\n"); 
    }
	  return 0;
}
