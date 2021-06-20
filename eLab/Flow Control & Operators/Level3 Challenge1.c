#include <stdio.h>
int main()
{
    int D,Oc,Of,Od,Fs,Fb,Fm,Fd;
    float ola,Fas;
    scanf("%d\n%d%d%d\n%d%d%d%d",&D,&Oc,&Of,&Od,&Fs,&Fb,&Fm,&Fd);
    ola=Oc*Of+(D-Oc)*Od;
    Fas=((D/Fs)*Fm)+Fb+(D*Fd);
    if (ola>Fas)
    {
        printf("Fastrack Taxi");
    }
    else if(Fas>ola)
    {
        printf("OLA Taxi");
    }
    else
    {
        printf("OLA Taxi");
    }
	return 0;
}
