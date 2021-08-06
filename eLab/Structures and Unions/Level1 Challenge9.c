#include <stdio.h>
void blank(){
    printf("sumOfDistances.feet sumOfDistances.inch");
}
struct Distance
{
    int feet;
    float inch;
}d1,d2,sumOfDistances;
int main()
{   
    scanf("%d %f\n",&d1.feet,&d1.inch);
    scanf("%d %f",&d2.feet,&d2.inch);
    int sumOfDistances=d1.feet+ d2.feet;
    float sumOfDistances2=d1.inch + d2.inch;
    printf("%d feet and %0.2f inches",sumOfDistances,sumOfDistances2);
    return 0;
}
