#include <stdio.h>
int sum(int num)
{
    if(num!=0)
    return (num%10+sum(num/10));
    else
    return 0;
}
union Data
{
    int num,res;
}data;
int main()
{
    scanf("%d",&data.num);
    data.res=sum(data.num);
    printf("%d",data.res);
	return 0;
}
