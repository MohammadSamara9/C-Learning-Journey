#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char name[20];
    int seatNum;
    float marks;
    double percentage;
    float grade;

}student_t;

int main()
{
    student_t students[50];
    printf("Enter students with names, seat no's, marks, percentages and grades:\n");
    for(int i = 0; i < 50;i++)
    {
        scanf("%s%d%f%lf%f",students[i].name,&students[i].seatNum,&students[i].marks,&students[i].percentage,&students[i].grade);
    }
    return 0;
}
