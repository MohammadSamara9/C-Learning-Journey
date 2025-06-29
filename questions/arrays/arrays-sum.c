#include <stdio.h>
#include <stdlib.h>

void sum(int First_array[], int Second_array[], int Sum_array[], int size);

int main()
{
    int First_array[5], Second_array[5], Sum_array[5], size;

    printf("Enter the elements of the first array:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &First_array[i]);
    }

    printf("Enter the elements of the second array:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &Second_array[i]);
    }
    sum(First_array, Second_array, Sum_array, 5);
    printf("The sum of the first and second arrays:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", Sum_array[i]);
    }

    return 0;
}

void sum(int First_array[], int Second_array[], int Sum_array[], int size)
{
    for(int j = 0; j < size; j++)
    {
        Sum_array[j] = First_array[j] + Second_array[j];
    }
}
