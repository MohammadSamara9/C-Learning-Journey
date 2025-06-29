#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, f = 0;
        while(f == 0){
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &x, &y);
        if(x%y == 0){
            printf("The first integer divides the second.\n");
            f++;}
                }
    return 0;
}
