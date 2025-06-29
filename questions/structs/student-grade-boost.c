#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char bookName[20];
    char authorName[20];
    int edition;
    int year;
    float price;

}library_t;

int main()
{
   library_t myBooks[100];
    printf("Enter books:\n");
    for(int i = 0; i < 100;i++)
    {
        scanf("%s%s%d%d%f",myBooks[i].bookName,myBooks[i].authorName,&myBooks[i].edition,&myBooks[i].year,&myBooks[i].price);
    }
    return 0;
}
