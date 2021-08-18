#include <stdio.h>
#include <string.h>
int main()
{
    char S[1000000];
    scanf("%s",S);
    int i,c=0;
    for(i=0;i<strlen(S)-1;i++)
    {
        if(S[i]!=S[i+1])
            c++;
        else ;
    }
    printf("%d",c+1);
	return 0;
}
