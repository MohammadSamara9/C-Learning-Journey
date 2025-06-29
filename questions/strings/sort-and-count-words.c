#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort_words (char line [], char words[][50] , int * );
void print_result(char words[][50],int *);
int main()
{
    char  words [10][50],line [50];
    int k=0;
    printf("enter the line from ten words and small letters\n");
    gets(line);
    sort_words(line,words,&k);
    print_result(words, &k);


    return 0;
}
void sort_words (char line [], char words [][50] , int *k )
{
char temp [50],*p;
int i,j;
p=strtok(line ," ");
while(p!=NULL)
{
    strcpy(words[(*k)++],p);
    p=strtok(NULL ," ");
}
for(i=0;i<(*k-1);i++)
{
    for(j=i+1;j<*k;j++)
    {
        if(strcmp(words[i],words[j])>0)
        {
            strcpy(temp,words[i]);
            strcpy(words[i],words[j]);
            strcpy(words[j],temp);

        }
    }
}
}
void print_result(char words[][50], int *k)
{
    int i, j, count, printed;

    printf("\nOutput:\n");

    for (i = 0; i < *k; i++)
    {
        printed = 0;


    for (j = 0; j < i; j++)
        {
            if (strcmp(words[i], words[j]) == 0)
            {
                printed = 1;
                break;
            }
        }

        if (printed)
            continue;

        count = 1;


        for (j = i + 1; j < *k; j++)
        {
            if (strcmp(words[i], words[j]) == 0)
            {
                count++;
            }
        }

        printf("%-10s %d\n", words[i], count);
    }
}
