#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define namesize 19
#define n 5
int countAs(char names []);
void maxBonusEmp(char names[][19], int salaries[], int size);
int main()
{
char names [n][namesize];
int i,salaries [n];
for (i=0;i<n;i++)
{
    scanf("%s",names[i]);
    scanf("%d",&salaries[i]);
}
    return 0;
}

void maxBonusEmp(char names[][19], int salaries[], int size)
{
    int temp,i;
    for(i=0;i<n;i++)
    {
        temp=countAs(names[i]);
        if (temp>1)
        {
            salaries[i]+=100*temp;
        }


    }
}
int countAs(char names [])
{
    int count =0,j;

        for(j=0;names[j]!=NULL;j++)
        {
            if(names[j]=='a'||names[j]=='A')
                count++;
        }

    return count;
}
