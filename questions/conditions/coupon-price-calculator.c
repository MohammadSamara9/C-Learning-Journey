#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcPrice(int coup);

int main()
{
    int coup = 0;
    float total = 0, max, avg, price;
    int count = 0;

    printf("enter the number of coup\n");
    max = 0;

    while (coup != -1)
    {
        scanf("%d", &coup);
        if (coup == -1)
            break;

        price = calcPrice(coup);
        total = total + price;

        if (price > max)
            max = price;

        count++;
    }

    if (count > 0)
    {
        avg = total / count;
        printf("average price= %f shekel\n", avg);
        printf("maximum price=%f shekel\n", max);
    }

    return 0;
}

float calcPrice(int coup)
{
    float money;

    if (coup <= 20)
        money = coup * 5;

    else if (coup <= 50)
        money = coup * 6.5;

    else if (coup <= 80)
        money = coup * 8;

    else
        money = coup * 10;

    return money;
}
