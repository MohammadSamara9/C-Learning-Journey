#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char func;
    printf("What function do you want to use?\n");
    scanf("%c", &func);
    if(func == '/' ||func == '%' ||func == '-' ||func == '+' ||func == '*')
    {
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &x, &y);

    switch(func)
    {
     case '+': printf("%d\n", x+y);
        break;
    case '-': printf("%d\n", x-y);
        break;
    case '/': printf("%f\n", (float)x/y);
        break;
    case '*': printf("%d\n", x*y);
        break;
    case '%': printf("%d\n", x%y);
        break;
    }}
    else printf("Invalid function!\n");
    return 0;
}
