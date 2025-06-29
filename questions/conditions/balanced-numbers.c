//mohammed abed alkream samara
//1241124
//Lecture 1
//lab 2
#include <stdio.h>
#include <stdlib.h>
int hasEqualDigitSum( int  );
int hasEqualDigitCount (int );
int isBalanced (int );
int main()
{
    int x,y,res;
    printf("enter the value of x and y\n");
    scanf("%d%d",&x,&y);

   while(x<=y)
   {

       res=isBalanced(x);
       if(res)
        printf("%d\n",x);
       x++;
   }
    return 0;
}


int isBalanced (int number )
{
    int check1,check2;
    check1=hasEqualDigitCount(number);
    check2=hasEqualDigitSum(number);
    if(check1== 1 && check2==1)
            return 1;
        else
            return 0;

}

int hasEqualDigitCount (int c )
{
    int counteven=0 ,countodd=0,digit;
   while(c>0)
   {
       digit = c%10;
       if(digit%2==0)
       counteven++;
       else
        countodd++;
        c=c/10;
   }
   if(counteven==countodd)
        return 1;
    else
        return 0;
}

int hasEqualDigitSum( int n  )
{
    int temp,seven=0,sodd=0;
    while(n>0)
    {
       temp= n%10;

        if(temp%2==0)
            seven+=temp;
        else
            sodd+=temp;
       n=n/10;

    }
   if(seven==sodd)
                return 1;
            else
                return 0;

}

