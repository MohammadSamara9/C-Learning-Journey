#include <stdio.h>

int main()
{
    int i = 1, counter = 0;
    while(counter < 50){
        if(i%4 == 0){
         printf("%d\n", i);
         i++;
         counter++;
         }
         else i++;
}
    return 0;
}
