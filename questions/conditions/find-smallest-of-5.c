#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,f,g,smallest;
    printf("Enter 5 integers:\n");
    scanf("%d%d%d%d%d", &x, &y, &z, &f, &g);
    if (x < y && x < z && x < f && x < g)
        printf("%d is the smallest number", x);
    else if(y < x && y < z && y < f && y < g)
        printf("%d is the smallest number", y);
    else if(z < x && z < y && z < f && z < g)
        printf("%d is the smallest number", z);
    else if(f < x && f < y && f < z && f < g)
        printf("%d is the smallest number", f);
    else
        printf("%d is the smallest number", g);
    return 0;
}
