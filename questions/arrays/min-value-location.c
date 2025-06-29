#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, location = 0, i, a[10];
    printf("enter the value\n");
    scanf("%d", &a[0]);

    min = a[0];

    for(i = 1; i < 10; i++)
    {
        printf("enter the value\n");
        scanf("%d", &a[i]);

        if(a[i] < min)
        {
            min = a[i];
