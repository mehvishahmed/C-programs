#include <stdio.h>
typedef enum{Internetpack=129,CheckBalance=161,Talktosupport=182,TuneService=671}Customersupport;
int main()
{
    Customersupport helplinenum;
    scanf("%u",&helplinenum);
    if(helplinenum==Internetpack)
        printf("Explore Internet Pack");
    else if(helplinenum==CheckBalance)
        printf("Balance Checking Service");
    else if(helplinenum==Talktosupport)
        printf("Customer Executive");
    else
        printf("Caller Tune Service");
	return 0;
}
