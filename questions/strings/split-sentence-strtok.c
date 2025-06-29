#include <stdio.h>
#include <string.h>

int main() {
   char line [50]="ahmad is a good boy";
   char *p;
   p=strtok(line," ");
   while(p != NULL)
   {
       printf("%s\n",p);
       p= strtok(NULL," ");
   }


    return 0;
}
