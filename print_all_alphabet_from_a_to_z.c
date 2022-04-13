/*-------------------------Docuentation Section ----------------------------*/
/*---------------- C language program to print all alphabet------------------
-------------------from a to z using all three C language loops-------------*/
/*------------------------Preprocessor Directives --------------------------*/

#include <stdio.h> //cotains the pintf(),scanf(),getchar() build in function
#include <conio.h> //contains the getch(),getche() build in function
#include <stdlib.h>

/*---------------- Prototype Function declaration------------------*/
void hold_it(void);
void forloop(void);
void dowhile(void);
void while_(void);
/*------------------------------------------------------*/
int main()
{
    forloop();
    dowhile();
    while_();
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void forloop(void)
{
    printf("\n\t---Using For loop---");
    // ascii value of A is 65 then we start from 65 num
    printf("\n\t---In Capital latters---");
    for (int i = 65; i < 91; i++)
    {
        printf("\n\t%c", i);
    }
    // and ascii value of a is 97
    printf("\n\t---Using For loop---");
    printf("\n\t---In Small latters---");
    for (int i = 97; i < 123; i++)
    {
        printf("\n\t%c", i);
    }
}
/*------------------------------------------------------*/
void dowhile(void)
{
    int i = 65;
    printf("\n\t---Using do while loop---");
    printf("\n\t---In Capital latters---");
    do
    {
        printf("\n\t%c", i);
        i++;
    } while (i < 91);
    int j = 97;
    printf("\n\t---Using do while loop---");
    printf("\n\t---In Small latters---");
    do
    {
        printf("\n\t%c", j);
        j++;
    } while (j < 123);
}
/*------------------------------------------------------*/
void while_(void)
{
    int i = 65;
    printf("\n\t---Using while loop---");
    printf("\n\t---In Capital latters---");
    while (i < 91)
    {
        printf("\n\t%c", i);
        i++;
    }
    int j = 97;
    printf("\n\t---Using while loop---");
    printf("\n\t---In Small latters---");
    while (j < 123)
    {
        printf("\n\t%c", j);
        j++;
    }
}
/*------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
    return;
}
/*------------------------------------------------------*/