#include <stdio.h>
#include <stdlib.h>

void descening(int array[], int size);
int main()
{
    int array[10];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < 10 ; i++)
    {
        scanf("%d", &array[i]);
    }
        printf("\nThe array before arranging:\n");
    for(int i = 0; i < 10 ; i++)
    {
        printf("%d\t", array[i]);
    }
    descening(array, 10);
        printf("\nThe array after rearranging:\n");
    for(int i = 0; i < 10 ; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
void descening(int array[], int size)
{
    int temp;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(array[i] < array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
    }}}}
