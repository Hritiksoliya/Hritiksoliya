/*-----------------Docuentation Section ------------------*/

/*this C program is do sum of first n natural number----- */

/*---------------Preprocessor Directives -----------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*------------Prototype function declaration--------------*/
void hold_it(void);
void input(void);
/*--------------------------------------------------------*/
int main()
{    
    /*---call the function----*/
    input();
    return 0;
}
/*--------------------------------------------------------*/
void input(void)
{
    int num, sum = 0;
    printf("\n\n\tEnter the Number :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("\n\n\tThe sum of first %d netural num is:%d", num, sum);
    return;
}
/*--------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n");
    system("pause");
}
/*-----------------------------------------------------*/