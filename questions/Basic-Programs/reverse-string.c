#include <stdio.h>
#include <math.h>
#define PI 3.14

double SurfaceArea(double r);
double Volume(double r, double h);

int main()
{
    double r, h, surfacearea, volume;
    printf("Enter radius and height of a cylinder:\n");
    scanf("%lf%lf", &r, &h);

    surfacearea = SurfaceArea(r);
    volume = Volume(r,h);

    printf("The surface area = %lf \nThe volume = %lf", surfacearea, volume);
    return 0;
}

double SurfaceArea(double r)
{
    return 2*r*PI;
}

double Volume(double r, double h)
{
    return pow(r,2)*PI*h;
}
