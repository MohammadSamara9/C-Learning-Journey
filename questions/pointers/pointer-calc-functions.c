#include <stdio.h>
#include <stdlib.h>

void calc(int x, int y, int *sum, int *subtract, int *multiplication, int *division);

int main()
{
    int x, y, *sum, *subtract, *multiplication, *division;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &x, &y);
    calc(x, y, &sum, &subtract, &multiplication, &division);
    printf("The sum = %d, The subtraction = %d, The multiplication = %d , The division = %d", sum, subtract, multiplication, division);
    return 0;
}

void calc(int x, int y, int *sum, int *subtract, int *multiplication, int *division)
{
    *sum = x + y;
    *subtract = x - y;
    *multiplication = x * y;
    *division = x / y;
}
