#include <stdio.h>
int main()
{
    int n,t,i,count=0;
    char s[100];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%s",s);
        for(i=0;i<n;i++){
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            {
                if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
	return 0;
}
