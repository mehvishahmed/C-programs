#include <stdio.h>
typedef enum{SF=93,RC=91,BFM=92,RFM=96,HFM=106,RM=98,AFMG=100,CL=104}FM;
int main()
{
    FM freq;
    scanf("%u",&freq);
    if(freq == 93)
        puts("Suryan FM");
    if(freq == 91)
        puts("Radio City");
    if(freq == 92)
        puts("Big FM");
    if(freq == 96)
        puts("Red FM");
    if(freq == 106)
        puts("Hello FM");
    if(freq == 98)
        puts("Radio Mirchi");
    if(freq == 100)
        puts("AIR FM Gold");
    if(freq == 104)
        puts("Chennai Live FM");
	return 0;
}
