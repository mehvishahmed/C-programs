#include <stdio.h>
int main()
{
    int t;
    scanf("%i",&t);
    if(!(t>0 && t <=1000)){
        printf("INVALID INPUT");
        return 0;
    }
    while(t--)
    {
        int *ptr;
        int n,i,total=0;
        scanf("%i",&n);
        int numArray[n];
        ptr=numArray;
        for(i=0;i<n;i++)
        {
            scanf("%i",&ptr[i]);
            total+=numArray[i];
        }
        printf("%i\n", total);
    }
	return 0;
}
