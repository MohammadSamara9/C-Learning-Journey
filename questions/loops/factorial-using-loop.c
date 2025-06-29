#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,fac;
    printf("enter the number\n");
    scanf("%d",&n);
    fac=n;

    for(i=1;i<n;i++)
    {
        fac = fac * i;
    }
    printf("%d\n",fac);

    return 0;
}
