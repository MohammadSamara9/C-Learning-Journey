#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[100], newline[100] = "", *words[50];
    int count = 0;

    printf("enter the line\n");
    gets(line);  

    char *p = strtok(line, " ");
    while (p != NULL)
    {
        words[count++] = p;
        p = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--)
    {
        strcat(newline, words[i]);
        if (i > 0)
            strcat(newline, " ");
    }

    printf("\n%s\n", newline);

    return 0;
}
