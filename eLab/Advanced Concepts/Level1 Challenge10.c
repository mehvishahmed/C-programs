#include <stdio.h>
typedef enum{BADREQUEST=400,UNAUTHORIZED=401,FORBIDDEN=403,NOTFOUND=404,INTERNALSERVERERROR=500}Status;
int main()
{
    Status serverstatuscode;
    scanf("%u",&serverstatuscode);
    if(serverstatuscode==BADREQUEST)
        printf("BAD REQUEST");
    else if(serverstatuscode==UNAUTHORIZED)
        printf("UNAUTHORIZED");
    else if(serverstatuscode==FORBIDDEN)
        printf("FORBIDDEN");
    else if(serverstatuscode==NOTFOUND)
        printf("NOT FOUND");
    else if(serverstatuscode==INTERNALSERVERERROR)
        printf("INTERNAL SERVER ERROR");
	return 0;
}
