#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int a=1,j=1;j<=5;j++)
        for(int i=1;i<=5;i++)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}
