#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,res;
    printf("please enter the number\n");
    scanf("%d" ,&n);
    res= sumof(n);
    printf("the sum of numbers divisable by 3 and 5 =%d" ,res);

    return 0;
}

int sumof(int n)//67
{
  int digit, sum = 0;
    while (n > 0) {
        digit = n % 10;
        if (digit % 3 == 0 || digit % 5 == 0)
            sum += digit;
        n = n / 10;
    }
    return sum;
}
