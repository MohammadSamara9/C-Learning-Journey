#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int numOfsmall;
    int numOflarge;
    float price;

}customer;
int main()
{
    customer pizza[3];
    int i;
    FILE *p;
    p=fopen("customer.txt","r");
    for(i=0;i<3;i++)
    {
     fscanf(p,"%s%d%d",pizza[i].name,&pizza[i].numOflarge,&pizza[i].numOfsmall);
     pizza[i].price=(pizza[i].numOflarge*6.5+pizza[i].numOfsmall*4);
     printf("customer %s should pay %f\n",pizza[i].name,pizza[i].price);
    }




    return 0;
}
