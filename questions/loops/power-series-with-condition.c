#include <stdio.h>
#include <stdlib.h>

int main()
{
    double y = 1;
    int x, n, i = 1, power;

    printf("Enter values for x and n:\n");
    scanf("%d%d", &x, &n);

    power = x;

    while(i < n)
    {
        power *= power;
        i++;

        if(n % 2 == 0)
            y += power;
        else
            y -= power;
    }

    printf("%f", y);

    return 0;
}
