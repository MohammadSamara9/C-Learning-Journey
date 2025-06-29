#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i , j;
 char ch ='a' ;
 for(i=1;i<=7;i++)
 {
      for(j=1;j<=4;j++)
 {
     if(ch=='z')
    {
        printf("z");
        break;
    }
     printf("%c", ch);
     printf(" ");
     ch++;

 }
 printf("\n");
 }


    return 0;
}
