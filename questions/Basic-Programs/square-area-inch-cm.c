#include <stdio.h>
#include <math.h>

double area(double);
double inch_cm(double);

int main()
{
    double L_inch, L_cm, Area_cm, Area_inch;
    printf("Enter the length of a square in inches:\n");
    scanf("%lf", &L_inch);
    Area_inch = area(L_inch);
    Area_cm = inch_cm(Area_inch);
    printf("The area in inches = %lf \nThe area in cm = %lf", Area_inch, Area_cm);
    return 0;
}

double area(double L_inch)
{
    return pow(L_inch, 2);
}

double inch_cm(double Area_inch)
{
    return pow(2.54,2) * Area_inch;
}
