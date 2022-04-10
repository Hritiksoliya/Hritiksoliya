
/*-----------Docuentation Section ----------*/
/*Menu Driven Programming style –
1. To calculate area of circle
2. To calculate area of rectangle
3. To calculate simple interest
4. To calculate compound interest
*/
/*---------------Preprocessor Directives ---------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*---------- Prototype Function declaration-------------*/
void input(void);
void hold_it(void);
void cmp_ints(void);
void area_circle(void);
void area_rectangel(void);
void simple_interest(void);
/*------------------------------------------------------*/
int main()
{
    input();
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void input() // User defined function /sub function
{
    system("cls");
    // system("clear");
    int num;
    printf("\n\t\t\tMENU");
    printf("\n\t/----------------------------------/");
    printf("\n\t 1. To calculate area of circle \n\t 2. To calculate area of rectangle\n\t 3. To calculate simple interest \n\t 4. To calculate compound interest");
    printf("\n\t/----------------------------------/\n\t --:- ");
     scanf("%d", &num);
    switch (num)
    {
    case 1:
        area_circle();
        break;
    case 2:
        area_rectangel();
        break;
    case 3:
        simple_interest();
        break;
    case 4:
        cmp_ints();
        break;
    default:
        printf("\n\tWrong Option you Entered");

        break;
    }
}
/*------------------------------------------------------*/
/*____for Calculate Compounde Interst____*/
void cmp_ints(void)
{
    float r, A, n = 12, R, P, t, pawer;
    printf("\n\tYou enterd 4 for Calculate Compounde Interst");
    printf("\n\tEnter Principal :");
    scanf("%f", &P);
    printf("\n\tEnter Annual Rate : ");
    scanf("%f", &R);
    printf("\n\tEnter Time in Year :");
    scanf("%f", &t);
    r = R / 100;
    pawer = (n * t);
    A = P * pow((1 + r / n), pawer);
    // printf("%f\t", A);
    printf("\n\t The total amount accrued, principal plus\n\t interest, with compound  interest  on a\n\t principal of %.2f at a rate of %.2f%%per\n\t year compounded 12 times per year over \n\t %.1f years is %.3f", P, R, t, A);
    return;
}
/*------------------------------------------------------*/
/*____for calculate the Area of Rectangle____*/
void area_rectangel(void)
{
    float area, a, b;
    printf("\n\tYou Entered 2 for calculate the Area of Rectangle ");
    printf("\n\tEntre side of rectangle a and b");
    scanf("%f%f", &a, &b);
    area = a * b;
    printf("\n\tArea of Rectangle is :%f", area);
    return;
}
/*------------------------------------------------------*/
/*____Calculate Area of Circle____*/
void area_circle(void)
{
    float area, r, pi;
    printf("\n\tYou Enterd 1 for Calculate Area of Circle");
    printf("\n\tEnter Redius of Circle :");
    scanf("%f", &r);
    pi = 3.14;
    area = pi * r * r;
    printf("\n\tArea of Circle is :%.2f\n", area);
    return;
}
/*------------------------------------------------------*/
/*____for Calculate the Simple Interest____*/
void simple_interest(void)
{
    float SI, P, T, R;
    printf("\n\tYou Enter 3 for Calculate the Simple Interest");
    printf("\n\tEnter Principle :");
    scanf("%f", &P);
    printf("\n\tEnter Anual Rate Of Interstin %% :");
    scanf("%f", &R);
    printf("\n\tEnter Time In Year :");
    scanf("%f", &T);
    SI = (P * T * R) / 100;
    printf("\n\tThe Value Of Simple Interst is :%.2f", SI);
    return;
}
/*------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n\t");

    system("pause");
    // printf("\n\n Press any key to continue\n\n")
    // getch();
}
/*------------------------------------------------------*/