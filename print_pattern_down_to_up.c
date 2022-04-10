/*-----------Docuentation Section ----------*/
// for loop ---to print pattern---
/*****
 ****
 ***
 **
 */
/*---------------Preprocessor Directives ---------------*/
#include <stdio.h>  //contain the printf(),scanf(),getcha(), build in function
#include <conio.h>  //contains the getch(),getche() build in function
#include <stdlib.h>
/*---------- Prototype Function declaration-------------*/
void input(int a);
void hold_it(void);
/*------------------------------------------------------*/
int main()
{
    int n;
    printf("Enter line\n");
    scanf("%d", &n);
    input(n);
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void input(int a)
{
    for (int i = a; i != 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return;
}
/*------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
    return;
}
/*------------------------------------------------------*/