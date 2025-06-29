#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;
    printf("Enter the character:\n");
    scanf("%c", &C);
    if(C == 'a' || C == 'A' || C == 'e' || C == 'E' || C == 'i' || C == 'I' || C == 'o' || C == 'O' || C == 'u' ||C == 'U')
        printf("The character is a vowel.");
    else
        printf("The character is a consonant.");
    return 0;
}
