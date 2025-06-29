#include <stdio.h>
#include <stdlib.h>

int main()
{
   int row,colum, i ,j;
   printf("enter the  raws colum \n");
   scanf("%d%d",&row,&colum);
   int a[row][colum];
   printf("enter the values");
   for(i=0;i<row;i++)
   {
       for(j=0;j<colum;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<row;i++)
   {
       for(j=0;j<colum;j++)
       {
           printf("%d  ",a[i][j]);
       }
       printf("\n");
   }

    return 0;
}

