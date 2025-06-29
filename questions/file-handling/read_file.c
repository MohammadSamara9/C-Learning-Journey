#include <stdio.h>

int main() {
    FILE *p;
    char ch;

    p = fopen("output.txt", "r");

    if (p == NULL)
    {
        printf("File not found!\n");
        return 1;
    }


    while ((ch = fgetc(p)) != EOF)
    {
        putchar(ch);
    }

    fclose(p);
    return 0;
}
