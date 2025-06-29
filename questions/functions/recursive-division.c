#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main()
{
    int x, y;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("Enter the power : ");
    scanf("%d", &y);
    printf("The answer = %d\n", power(x,y));
    return 0;
}

int power(int x, int y)
{
    if(y == 1)
        return x;
    else if(y == 0)
        return y;
    else
        return(x * power(x, y-1));
}
