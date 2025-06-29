#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q = 2;
    int *p;
    p = &q;
    *p = 100;
    printf("%d\n", q);
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p\n", &q);
    printf("%p\n", &p);
    return 0;
}
