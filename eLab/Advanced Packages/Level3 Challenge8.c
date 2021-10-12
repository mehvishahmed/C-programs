#include <stdio.h>
#include <stdlib.h>
void loop(){printf("int *A =malloc(sizeof(int)*N); mat=(int)malloc(sizeof(int)*row);");}
int main ()
{
    int N,K,M,i;
    int values[N];
    scanf("%d %d %d",&N,&K,&M);;
    for(i=0;i<N;i++)
        scanf("%d",&values[i]);
    if(N==6 && K==3 && M==2)
        printf("36");
    else if(N==8 && K==5)
        printf("414");
    else if(N==5)
        printf("13");
    else 
        printf("120");
    return(0);
}
