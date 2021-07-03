#include <stdio.h>
#include <math.h>
int main()
{
    long long int px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld",&px,&py,&pz,&qx,&qy,&qz,&dx,&dy,&dz,&cx,&cy,&cz,&r);
    double a,b,c,l1,l2,l3,A,B,C,E,F,G;
    a=cx-px;
    b=cy-py;
    c=cz-pz;
    l1=qx-px;
    l2=qy-py;
    l3=qz-pz;
    A=pow(b,2)+pow(c,2)-pow(r,2);
    B=pow(a,2)+pow(c,2)-pow(r,2);
    C=pow(b,2)+pow(a,2)-pow(r,2);
    E=dx*dx*A+dy*dy*B+dz*dz*C-2*b*c*dy*dz-2*a*c*dx*dz-2*a*b*dx*dy;
    F=2*(l1*dx*A+l2*dy*B+l3*dz*C-b*c*l2*dz-a*c*l1*dz-b*c*l3*dy-a*b*l1*dy-a*c*l3*dx-a*b*l2*dx);
    G=l1*l1*A+l2*l2*B+l3*l3*C-2*(b*c*l2*l3+a*c*l1*l3+a*b*l1*l2);
    double qw=sqrt(F*F-4*E*G);
    double ans;
    if(E)
    ans=(qw-F)/(2*E);
    else
    ans=(-1*G)/F;
    printf("%.10lf\n",ans);
    return 0;
}
