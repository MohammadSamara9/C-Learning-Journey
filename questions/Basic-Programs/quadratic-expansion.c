#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade
    printf("Enter the grade:\n");
    scanf("%d", &grade);
    if(grade >= 60)
        printf("Pass.");
    else
        printf("Fail.");
    return 0;
}

int main()
{
    int x = 2, counter = 0, smaller = 1;
    while(counter < 50){
        x++;
        while(smaller < x){
        if(x%smaller == 0){
            printf("%d\n", x);
            smaller++;
            counter++;
            }
}}
    return 0;
}
