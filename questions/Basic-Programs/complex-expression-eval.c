#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z, Z;
    printf("Enter x, y and z\n");
    scanf("%f%f%f", &x, &y, &z);

    Z = ((4.2*(x+y)/z) - (0.25*x)/(y+z))/((x+y)*(x+y));
    printf("Z = %f", Z);
    return 0;
}
