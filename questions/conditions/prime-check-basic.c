#include <stdio.h>
int main()
{
    int n, f = 0, i = 2;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while(i<n){
        if(n%i == 0)
            f = 1;
        i++;
                }
    if(f == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}
