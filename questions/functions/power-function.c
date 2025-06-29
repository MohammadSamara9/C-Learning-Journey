#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pow(int a,int b);
int main()
{
int a,b;
printf("enter the value of a nad b\n");
scanf("%d%d",&a,&b);
int res=pow(a,b);
printf("%d",res);


    return 0;
}
int pow(int a,int b)
{
    if(b==0)
        return 1;
    else if(a==0)
        return 0;
    return a*pow(a,b-1);
}

