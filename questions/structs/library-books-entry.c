#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char name[10];
    int section;
    float grade;

}student_t;

int main()
{
    int i,size =5;                       // you can put any number it is just an example
    student_t students[size];
    printf("Enter students with names, sections and grades:\n");
    for( i = 0; i < size;i++)
    {
        scanf("%s%d%f",students[i].name,&students[i].section,&students[i].grade);
    }

    for(i = 0; i < size ; i++)
    {
        students[i].grade = 1.05 * students[i].grade;
        if(students[i].grade > 100)
            students[i].grade = 100;
    }

    for(i = 0; i < size ; i++)
    {
    if(strncmp(students[i].name,"Al",2)==0)
        students[i].grade = 100;
    }

    student_t temp;
    for( i =0;i < size;i++)
    for(int j = 0; j < size-1 ; j++)
    {
        if(students[j].grade < students[j+1].grade)
        {
            temp = students[j];
            students[j] = students[j+1];
            students[j+1] = temp;
        }
    }

    for(i = 0; i < size ; i++)
        printf("%s  %d  %.2f\n",students[i].name,students[i].section,students[i].grade);

    return 0;
}
