#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int repmax = 1, repmin = 1, max = 0, min = 0, old;

    printf("enter the old\n");
    scanf("%d", &old);
    min = old;
    max = old;

    while (old != -1)
    {
        scanf("%d", &old);

        if (old == -1)
            break;

        if (max < old)
        {
            max = old;
            repmax = 1;
        }
        else if (max == old)
        {
            repmax++;
        }

        if (min > old)
        {
            min = old;
            repmin = 1;
        }
        else if (min == old)
        {
            repmin++;
        }
    }

    printf("MAX=%d and repeted:%d\n", max, repmax);
    printf("min=%d and repeted :%d\n", min, repmin);

    return 0;
}
