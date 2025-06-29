#include <stdio.h>

int main() {
    FILE *p;
    char text[100];


    p = fopen("output.txt", "w");

    if (p == NULL)
    {
        printf("Error \n");
        return 1;
    }

    printf("Enter the line \n");
    fgets(text, sizeof(text), stdin);

    fprintf(p, "%s", text);
    fclose(p);

    return 0;
}
