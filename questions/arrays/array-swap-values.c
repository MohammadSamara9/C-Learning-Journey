#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user[5], stat[5]={1,2,3,4,5}, temp;
    for(int i=0; i<5; i++)
    {
        printf("Enter the values of the array:\n");
        scanf("%d", &user[i]);
    }
        printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t", user[i]);
        printf("%d\n", stat[i]);
    }
        printf("\nafter switch\n\n");

    for(int j=0; j<5; j++)
    {
        temp = user[j];
        user[j] = stat[j];
        stat[j] = temp;
        printf("%d\t", user[j]);
        printf("%d\n", stat[j]);
    }



    return 0;
}
