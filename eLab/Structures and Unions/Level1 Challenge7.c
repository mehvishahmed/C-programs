#include <stdio.h>
#include <math.h>
struct circleshape
{
    int x1,x2,y1,y2,radius;
};
int main()
{
    struct circleshape dis;
    scanf("%d %d",&dis.x1,&dis.y1);
    scanf("%d",&dis.radius);
    scanf("%d %d", &dis.x2,&dis.y2);
    int r1 = pow(dis.x2-dis.x1,2);
    int r2 = pow(dis.y2-dis.y1,2);
    (r1 + r2<=dis.radius*dis.radius)?printf("BALL LANDED INSIDE THE STADIUM"):printf("BALL IS OUT OF THE STADIUM");
	return 0;
}
