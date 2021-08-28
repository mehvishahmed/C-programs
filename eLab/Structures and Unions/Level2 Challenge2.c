#include <stdio.h>
#include <string.h>
struct first
{
    char food[11]; 
};
int main()
{
    struct first dish1[4],dish2[4]; 
    int t ,i,j;
    scanf("%d",&t); 
    while(t--)
    {
        for(i = 0; i<4; i++)
            scanf("%s",dish1[i].food); 
        for(i = 0; i<4; i++)
            scanf("%s",dish2[i].food);
        int cnt = 0 ; 
        for(i = 0; i<4; i++)
        {
            for(j =0; j<4; j++)
            {
                if(strcmp(dish1[i].food,dish2[j].food) == 0)
                    cnt++; 
            }
        }
        if(cnt >=2)
            printf("similar\n"); 
        else
            printf("dissimilar\n"); 
    }
	return 0;
}
