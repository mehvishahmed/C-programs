#include <stdio.h>
#define PI 3.14159
#include <math.h>
float circle(float);
float square(float);
float rectangle(float,float);
float triangle(float,float,float);
int main()
{
    int op;
    float r,s,l,b,a,c,area;
    do
    {
        printf("AREA OF\n");
        printf("1. CIRCLE\n");
        printf("2. SQUARE\n");
        printf("3. RECTANGLE\n");
        printf("4. TRIANGLE\n");
        printf("5. EXIT\n");
        printf("Enter your option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            printf("Enter the radius : ");
            scanf("%f",&r);
            area=circle(r);
            printf("Area = %.2f sq.units\n",area);
            break;
            case 2:
            printf("Enter the side : ");
            scanf("%f",&s);
            area=square(s);
            printf("Area = %.2f sq.units\n",area);
            break;
            case 3:
            printf("Enter the length : ");
            scanf("%f",&l);
            printf("Enter the breadth : ");
            scanf("%f",&b);
            area=rectangle(l,b);
            printf("Area = %.2f sq.units\n",area);
            break;
            case 4:
            printf("Enter the three sides : ");
            scanf("%f%f%f",&a,&b,&c);
            area=triangle(a,b,c);
            printf("Area = %.2f sq.units\n",area);
            break;
        }
    }
    while(op<5);
    return 0;
}
float circle(float r)
{
    float area;
    area=PI*r*r;
    return area;
}
float square(float s)
{
    float area;
    area=s*s;
    return area;
}
float rectangle(float l,float b)
{
    float area;
    area=l*b;
    return area;
}
float triangle(float a,float b,float c)
{
    float area,s;
    s=a+b+c/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
