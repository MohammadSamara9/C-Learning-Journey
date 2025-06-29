#include <stdio.h>
#include <math.h>

float area(float, float, float);

int main()
{
    float a,b,c;
    printf("Enter a, b and c sides of the triangle:\n");
    scanf("%f%f%f", &a,&b,&c);
    if (a+b>c && c+a>b  && b+c>a)
        printf("The area of the triangle = %f", area(a,b,c));
    else
        printf("The conditions are not satisfied");
    return 0;
}

float area(float a, float b, float c)
{
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
