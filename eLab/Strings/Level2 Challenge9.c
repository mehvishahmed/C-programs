#include <stdio.h>
int main()
{
    char report[501];
    int test,i,n;
    scanf("%d",&test);
    while(test--)
    {
        int count=0;
        scanf("%d",&n);
        scanf("%s",report);
        for(i=0;i<n;i++){
            if(report[i]=='H')
                count++;
            if(report[i]=='T')
                count--;
            if(count<0||count>1)
                break;
        }
        if(count==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
	return 0;
}
