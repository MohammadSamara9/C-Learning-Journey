#include <stdio.h>

int findsum(int, int);

int main()
{
    int x, y, sum;
    printf("Enter x and y:\n");
    scanf("%d%d", &x, &y);
    sum = findsum(x,y);
    printf("The sum = %d", sum);
    return 0;
}

int findsum(int x, int y)
{
    return x + y;
}
