#include <stdio.h>
void tHanoi(int n,char from_rod,char to_rod,char aux_rod) 
{
    if(n==1){
        printf("\nMove disk 1 from rod %c to rod %c",from_rod,to_rod);
        return;
    }
    tHanoi(n-1,from_rod,aux_rod,to_rod);
    printf("\nMove disk %d from rod %c to rod %c",n,from_rod,to_rod);
    tHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
    int num;
    scanf("%d",&num);
    tHanoi(num,'A','C','B');
    return 0;
}
