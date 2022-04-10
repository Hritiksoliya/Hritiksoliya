/*-----------Docuentation Section ----------*/
// for loop ---to print factorial---
/*---------------Preprocessor Directives ---------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*---------- Prototype Function declaration-------------*/
void input(void);
void hold_it(void);
/*------------------------------------------------------*/
int main()
{
    input();
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void input()
{
    int i, fact = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("\n factorial of is =%d", fact);
}
/*------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
    return;
}
/*------------------------------------------------------*/
