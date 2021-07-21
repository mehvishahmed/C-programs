#include<stdio.h>
int main()
{
    int a[4];
    int b[4] = {1};
    int c[4] = {1,2,3,4};
    int i;
    printf("\nArray a:\n");
    for(i=0;i<4;i++)
        printf("arr[%d]: %d\n",i,a[i]); //PRINTS GARBAGE VALUES
    printf("\nArray b:\n");
    for(i=0;i<4;i++)
        printf("arr[%d]: %d\n",i,b[i]); //AUTOMATICALLY FILLS ZEROS IN UNDEFINED ARRAY ELEMENTS
        printf("\nArray c:\n");
    for(i=0;i<4;i++)
        printf("arr[%d]: %d\n",i,c[i]);
    return 0;
}
