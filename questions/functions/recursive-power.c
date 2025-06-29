#include <stdio.h>
#include <stdlib.h>

int division(int a, int b);

int main()
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("The answer = %d", division(a, b));
    return 0;
}
int division(int a, int b)
{
    if (a < b )
        return 0;
    if (b == 0)
        return 0;
    else
        return (1 + division(a-b, b));
}
