#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10], min, location;
    for(int i=0; i<10; i++)
    {
        printf("Enter the values of the array:\n");
        scanf("%d", &array[i]);
    }

        min = array[0];

    for(int i=0; i<10; i++)
    {
        if(min > array[i])
        {
            min = array[i];
            location = i;
        }
    }
    printf("The smallest integer = %d and its location %d", min, location);
    return 0;
}
