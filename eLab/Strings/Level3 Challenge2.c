#include <stdio.h>
#include <string.h>
int check(char ch)
{
    if(ch=='1')
        return 1;
    else
	    return 0;
}
int main()
{ 
    int i,t,n;
    scanf("%d",&t);
    while(t--)
    {
        int count=0,count1=0;
        char S[100],R[100];
        scanf("%d",&n);
        scanf("%s %s",S,R);
        for(i=0;i<n;i++)
        {
            count+=check(S[i]);
            count1+=check(R[i]);
        }
        if(count==count1)
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}
