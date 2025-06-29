#include <stdio.h>
#include <stdlib.h>

void Arrays_operations(int a[], int b[], int size);
void reverse_array(int r[], int size);

int main()
{
    int size = 0;
    printf("enter the size\n");
    scanf("%d", &size);
    int a[size], b[size];

    printf("Enter elements of array a:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of array b:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &b[i]);
    }

    Arrays_operations(a, b, size);

    char choice;
    printf("\nwhich array you want to reverse it\n");
    scanf(" %c", &choice);

    if (choice == 'a')
        reverse_array(a, size);
    else if (choice == 'b')
        reverse_array(b, size);
    else
        printf("\ninvaild choice\n");

    return 0;
}

void Arrays_operations(int a[], int b[], int size)
{
    int i = 0, minA, minB, maxA, maxB, multi[size];
    maxA = a[i];
    maxB = b[i];

    for (i = 0; i < size; i++)
    {
        if (a[i] > maxA)
            maxA = a[i];
        if (b[i] > maxB)
            maxB = b[i];
    }

    printf("\nthe max number in array a =%d\n the max number in array b =%d\n", maxA, maxB);

    minA = a[0];
    minB = b[0];

    for (i = 0; i < size; i++)
    {
        if (a[i] < minA)
            minA = a[i];
        if (b[i] < minB)
            minB = b[i];
    }

    printf("\nthe min number in array a =%d\n the min number in array b =%d\n", minA, minB);

    for (i = 0; i < size; i++)
    {
        multi[i] = a[i] * b[i];
        printf("%d ", multi[i]);
    }
}

void reverse_array(int r[], int size)
{
    int temp, i;
    for (i = 0; i < size / 2; i++)
    {
        temp = r[i];
        r[i] = r[size - 1 - i];
        r[size - 1 - i] = temp;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", r[i]);
    }
}
