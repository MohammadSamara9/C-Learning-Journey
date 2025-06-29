#include <stdio.h>
#include <stdlib.h>

void myfun(int*, int*, int*, int*);

int main()
{
    int n1, n2, sum, sub, div, multi;
    printf("enter the n1 and n2\n");
    scanf("%d%d", &n1, &n2);
    myfun(&n1, &n2, &div, &multi);
    sum = n1 + n2;
    sub = n1 - n2;

    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", div);
    printf("%d\n", multi);

    return 0;
}

void myfun(int* n1, int* n2, int* div, int* multi)
{
    *div = *n1 / *n2;
    *multi = *n1 * *n2;
}
