#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, ones, tens, hundreds;
    printf("Enter a three-digit number:\n");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = (num % 100) / 10;
    ones = (num % 100) % 10;

    num = hundreds + tens + ones;

    printf("The sum = %d", num);
    return 0;
}
