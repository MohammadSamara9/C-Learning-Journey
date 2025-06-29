#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if(num%3 == 0)
        printf("The number is divisible by 3.");
    else
        printf("The number is not divisible by 3.");
    return 0;
}
