#include <stdio.h>
int main()
{
    char s[100];
    int t,n,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int c=0,ch=0;
        scanf("%d",&n);
        scanf("%s",s);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){
                if(s[i]==s[j])
                c++;
            }
            if(c%2!=0){
                ch=1;
                printf("NO\n");
                break;
            }
                else
                    continue;
        }
        if(ch!=1)
            printf("YES\n");
    }
	return 0;
}
