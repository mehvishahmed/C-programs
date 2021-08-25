#include <stdio.h>
int main()
{
    int i,t,n,k,u,l;
    scanf("%d",&t);
    while(t--)
    {
        u=0,l=0;
        scanf("%d %d",&n,&k);
        char brothers[100];
        scanf("%s",brothers);
        for(i=0;i<n;i++)
        {
            if(brothers[i]>='A'&&brothers[i]<='Z')
                u++;
            else
                l++;
        }
        if(u<=k && l<=k)
            printf("Both\n");
        else if(l<=k)
            printf("Brother\n");
        else if(u<=k)
            printf("Surya\n");
        else
            printf("None\n");
    }
	return 0;
}
