/*-------------------------Docuentation Section ----------------------------*/

/*-----------Write an algorithm, Flow Chart and C language program to design

 calculator using arithmetic operators using switch case statement----------*/

/*------------------------Preprocessor Directives --------------------------*/

#include <stdio.h>  //cotains the pintf(),scanf(),getchar() build in function
#include <stdlib.h> //system command
#include <conio.h>  //contains the getch(),getche() build in function

/*---------------- Prototype Function declaration------------------*/
void hold_it(void);
void calculate();
void add(void);
void sub(void);
void mul(void);
void divi(void);
/*------------------------------------------------------*/
int main()
{
    calculate();
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void calculate()        //user defiend function/sub functions
{
    char input;
    system("cls");
    printf("\n\t-:-Enter '+' for Addition_");
    printf("\n\t-:-Enter '-' for subtraction_");
    printf("\n\t-:-Enter '*' for Multiplication_");
    printf("\n\t-:-Enter '/' for Division_\n\t::");
    scanf("%c",&input);
    switch (input)
    {
    case '+':
        add();
        break;
    case '-':
        sub();
        break;
    case '*':
        mul();
        break;
    case '/':
        divi();
        break;
    default:
        printf("\n\t WRONG OPTION !!!!!!!");
        break;
    }
}
/*------------------------------------------------------*/
void add(void)         //user defiend function/sub functions
{
    float a, b;
    printf("\n\t--------ADDITION--------");
    printf("\n\tEnter the First Number :");
    scanf("%f",&a);
    printf("\n\tEnter the Second Number :");
    scanf("%f",&b);
    printf("\n\tAnswer is:%.2f+%.2f is=%.2f",a,b,a+b);
    return;
}
/*------------------------------------------------------*/
void sub(void)             //user defiend function/sub functions
{
    float a, b;
    printf("\n\t-------SUBTRACTION------");
    printf("\n\tEnter the First Number :");
    scanf("%f",&a);
    printf("\n\tEnter the Second Number :");
    scanf("%f",&b);
    printf("\n\tAnswer is:%.2f-%.2f is=%.2f",a,b,a-b);
    return;
}
/*------------------------------------------------------*/
void mul(void)             //user defiend function/sub functions
{
    float a, b;
    printf("\n\t-----MULTIPLICATION------");
    printf("\n\tEnter the First Number :");
    scanf("%f",&a);
    printf("\n\tEnter the Second Number :");
    scanf("%f",&b);
    printf("\n\tAnswer is:%.2f*%.2f is=%.2f",a,b,a*b);
    return;
}
/*------------------------------------------------------*/
void divi(void)            //user defiend function/sub functions
{
    float a, b;
    printf("\n\t--------DIVITION--------");
    printf("\n\tEnter the First Number :");
    scanf("%f",&a);
    printf("\n\tEnter the Second Number :");
    scanf("%f",&b);
    printf("\n\tAnswer is:%.2f/%.2f is=%.2f",a,b,a/b);
    return;
}
/*------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n\t");

    system("pause");
    // printf("\n\n Press any key to continue\n\n");
    // getch();
    return;
}
