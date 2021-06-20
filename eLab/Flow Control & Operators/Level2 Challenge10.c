#include <stdio.h>
int main()
{
    int l,w,h;
    scanf("%d\n%d %d",&l,&w,&h);
    if (w<l && h<l)
        printf("UPLOAD ANOTHER");
    else if (w==h)
        printf("ACCEPTED");
    else printf("CROP IT");
    return 0;
}
