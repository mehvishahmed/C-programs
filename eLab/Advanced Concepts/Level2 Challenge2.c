#include <stdio.h>
#include <math.h>
int isSquare(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y);
void Square(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y);
void blank(){printf("extern int isSquare(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y);");}
int main()
{
    int t;
    scanf("%i", &t);
    while(t--)
    {
        int p1x, p1y, p2x, p2y, p3x,p3y, p4x, p4y;
        scanf("%i %i %i %i %i %i %i %i", &p1x, &p1y, &p2x, &p2y, &p3x,&p3y, &p4x, &p4y);
        Square(p1x, p1y, p2x, p2y, p3x,p3y, p4x, p4y);
    }
	return 0;
}
float distance(int p1x,int p1y,int p2x,int p2y){
    return (p1x -p2x)*(p1x-p2x) + (p1y-p2y)*(p1y-p2y);
}
void Square(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y)
{
    float d2,d3,d4;
     d2 = distance(p1x,p1y,p2x,p2y);
     d3 = distance(p1x,p1y,p3x,p3y);
     d4 = distance(p1x,p1y,p4x,p4y);
    if((d3 == d4 && 2 * d3 == d2 && 2*distance(p3x,p3y,p2x,p2y) == distance(p3x,p3y,p4x,p4y)) || (d2 == d4 && 2 * d2 == d3 && 2 *distance(p2x,p2y,p3x,p3y) == distance(p2x,p2y,p4x,p4y)))
            printf("Yes\n");
    else
        printf("No\n");
}
int isSquare(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y){
    return 0;
}
