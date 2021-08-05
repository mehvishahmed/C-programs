#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void findpan();
int main()
{
    char str[50];
    fgets(str,50,stdin);
    findpan(str);
	return 0;
}
void findpan(char arr[])
{
    int count[26]={0};
    int i,n=strlen(arr);
    for(i=0;i<n;i++)
        count[arr[i]-'a']=1;
    for(i=0;i<26;i++)
        if(count[i]==0)
        break;
    if(i==26)
        printf("panagram");
    else
        printf("not a panagram");
}
