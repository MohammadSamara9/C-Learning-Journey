//mohammed abed alkream fadel samara
//1241124
//lab2 lecture1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAXSIZE 100
#define NAMESIZE 50
void displayMainMenu();
void uploadDataFile ( char names[][NAMESIZE],int bins[],double prices[],int *size);
void printBooks( char names[][NAMESIZE],int bins[], double prices[], int size );
void addBook( char names[][NAMESIZE],int bins[], double prices[], int *size );
void removeBook( char names[][NAMESIZE],int bins[], double prices[], int *size );
void searchForBook( char names[][NAMESIZE],int bins[], double prices[], int size );
void updateDataFile(char names[][NAMESIZE],int bins[], double prices[], int  size);

int main()
{
int process=0,bins[MAXSIZE],size=0;
double prices[MAXSIZE];
char names[MAXSIZE][NAMESIZE];
uploadDataFile( names ,bins, prices, &size);
while(process!=5)
{
displayMainMenu();
    scanf("%d",&process);
    switch(process)
    {
        case 1:addBook(names ,bins,prices,&size);
               break;
        case 2:removeBook(names,bins ,prices ,&size);
               break;
        case 3:searchForBook(names,bins,prices,size);
               break;
        case 4:printBooks(names,bins ,prices ,size);
               break;
        case 5:updateDataFile(names,bins ,prices ,size);
               printf("THANK YOU FOR VIST\n");
               break;
        default :printf("please try again and enter true number \n");

    }

}


    return 0;
}
void displayMainMenu()
{
    printf("Please Select an Operation (1-5):\n");
    printf(" 1- Add a Book\n");
    printf(" 2- Remove a Book\n");
    printf(" 3- Search for a Book\n");
    printf(" 4- Print Book List\n");
    printf(" 5- Exit System\n");
}
void uploadDataFile (char names[][NAMESIZE],int bins[],double prices[],int *size)
{
    int i=0;
    FILE *in;
    in=fopen("books.txt","r");


    while(fscanf(in, "%s %d %lf",  names[i],&bins[i], &prices[i])!=EOF&&i<MAXSIZE)
    {
        i++;
    }
    *size=i;
    fclose(in);
}
void printBooks( char names[][NAMESIZE],int bins[], double prices[], int size )
{
    int i=0;
    printf("WELCOME TO BOOK STORE \n\n");
   printf("Book Name\t\t\t\t\t  Bin Number\t\t\t\t  Price\n");

    for(i=0;i<size;i++)
    {

             printf("%-52s%-10d\t\t\t\t  %0.2f\n",names[i],bins[i],prices[i]);

    }

}
void addBook(char names[][NAMESIZE], int bins[], double prices[], int *size )
{
    int temp,testpostion=0, i;
    char tempname[NAMESIZE];
    if(*size>=MAXSIZE)
    {
        printf("FULL\n");
        return;
    }
    printf("enter the bin number\n");
    scanf("%d",&temp);
    for(i=0;i<*size;i++)
    {
        if(bins[i]==temp)
        {
        printf("error\n");
        return;
        }
    }
    while(testpostion<*size&&bins[testpostion]<temp)
        testpostion++;


    for(i=*size;i>testpostion;i--)
    {
    bins[i]=bins[i-1];
    prices[i]=prices[i-1];
    strcpy(names[i],names[i-1]);
    }
    bins[testpostion]=temp;

    printf("enter the name of book with no space\n");
    scanf("%s",tempname);
    strcpy(names[testpostion],tempname);

    printf("ENTER THE PRICE\n");
    scanf("%lf",&prices[testpostion]);
    printf("DONE\n");
    (*size)++;

}
void removeBook( char names[][NAMESIZE],int bins[], double prices[], int *size )
{
    int i,testbin,testpostion=-1;
     if(*size>0)
    {
    printf("ENTER THE BIN OF THE BOOK YOU WANT\n");
    scanf("%d",&testbin);
    for(i=0;i<*size;i++)
    {
        if(bins[i]==testbin)
        {
            testpostion=i;
        }
    }
    if(testpostion==-1)
    {
     printf("ERROR\n");
     return;
    }

    for(i=testpostion;i<*size-1;i++)
    {
        bins[i]=bins[i+1];
    prices[i]=prices[i+1];
    strcpy(names[i],names[i+1]);
    }
    printf("DONE\n");
    (*size)--;
    }
    else
    {
        printf("EMPTY\n");
        return;
    }

}
 void searchForBook( char names[][NAMESIZE],int bins[], double prices[], int size )
 {
     int i,testbins,test=0;
     if(size>0)
    {
    printf("ENTER THE BIN NUMBER \n");
    scanf("%d",&testbins);
    for(i=0;i<size;i++)
    {
        if(bins[i]==testbins)
        {
            printf("Book Name\t\t\t\t\t  Bin Number\t\t\t\t  Price\n");
             printf("%-52s%-10d\t\t\t\t  %0.2f\n",names[i],bins[i],prices[i]);
            test=1;
            break;
        }
    }
    }
    else
    {
        printf("EMPTY\n");
        return;
    }
     if(test==0)
    {
     printf("ERROR \n ");
    }
 }

 void updateDataFile(char names[][NAMESIZE],int bins[], double prices[], int  size)
 {
     int i;
     FILE *out;
     out=fopen("books.txt","w");
     for(i=0;i<size;i++)
     {
         fprintf(out ,"%s %d %0.2f\n",names[i], bins[i],prices[i]);
     }
     fclose(out);
 }

