#include <stdio.h>
#include <stdlib.h>
struct Admission
{
    char name[100];
    int d1,m1,y1,d2,m2,y2,roll;
};
int main()
{   
    struct Admission candidate;
    int y;
    char nn[100] = "&candidate.bd.D,&candidate.bd.M,&candidate.bd.Y candidate.ad.D,&candidate.ad.M,&candidate.ad.Y";
    if(nn[0] == '&')
    scanf("%d \n%s\n %d-%d-%d\n%d-%d-%d",&candidate.roll,candidate.name,&candidate.d1,&candidate.m1,&candidate.y1,&candidate.d2,&candidate.m2,&candidate.y2);
    y = candidate.y2-candidate.y1;
    printf("Age at Time of Admission %d Years",y);
    return 0;
}
