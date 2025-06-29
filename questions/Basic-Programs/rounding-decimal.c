#include <stdio.h>

void rounding(float num);

int main()
{
    float num;
    printf("Enter a decimal number:\n");
    scanf("%f", &num);
    rounding(num);
    return 0;
}

void rounding(float num)
{
    num = (int) (num * 100 + 0.5);
    num = num /100;
    printf("The rounded number = %f", num);
}
