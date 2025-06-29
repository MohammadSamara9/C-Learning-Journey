#include <stdio.h>
#include <stdlib.h>

void calc(int, int, int, int *, int *, int *, int *, int *, int *, int *, int *);

int main()
{
    int Paid, Due, Back, *Two_Hundred, *One_Hundred, *Fifty, *Twenty, *Ten, *Five, *Two, *One;
    printf("Enter the amount paid and the amount due:\n");
    scanf("%d%d", &Paid, &Due);
    if(Paid < Due)
        printf("The amount paid is not enough.");
    else
        Back = Paid - Due;
        calc(Paid, Due, Back, &Two_Hundred, &One_Hundred, &Fifty, &Twenty, &Ten, &Five, &Two, &One);
        printf("The customer should be given %d dollars\n", Back);
        printf("Return %d two hundred bills\nand %d one hundred bills\nand %d fifty bills\nand %d twenty bills\nand %d ten bills\nand %d five bills\nand %d two bills\nand %d one bills.", Two_Hundred, One_Hundred, Fifty, Twenty, Ten, Five, Two, One);
        return 0;
}

void calc(int Paid, int Due, int Back, int *Two_Hundred, int *One_Hundred, int *Fifty, int *Twenty, int *Ten, int *Five, int *Two, int *One)
{
    *Two_Hundred = Back / 200;
    Back = Back - (*Two_Hundred) * 200;

    *One_Hundred = Back / 100;
    Back = Back - (*One_Hundred) * 100;

    *Fifty = Back / 50;
    Back = Back - (*Fifty) * 50;

    *Twenty = Back / 20;
    Back = Back - (*Twenty) * 20;

    *Ten = Back / 10;
    Back = Back - (*Ten) * 10;

    *Five = Back / 5;
    Back = Back - (*Five) * 5;

    *Two = Back / 2;
    Back = Back - (*Two) * 2;

    *One = Back / 1;
    Back = Back - (*One) * 1;
}
