/*-------------------------Docuentation Section ----------------------------*/

/*-----------Program to find multiplycation table of any num----------------*/

/*------------------------Preprocessor Directives --------------------------*/

#include <stdio.h>     //cotains the pintf(),scanf(),getchar() build in function
#include <conio.h>     //contains the getch(),getche() build in function
#include <stdlib.h>    //system command

/*---------------- Prototype Function declaration------------------*/

void hold_it(void);
void multi(int num);

/*-------------Globlal varible declaration------------*/
int input;
/*------------------------------------------------------*/
int main()
{
    printf("\n\nEnter the number whose table is needed :");
    scanf("%d", &input);
    multi(input);
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void multi(int num)
{
    for (int i = 1
    ; i < 11; i++)
    {
        printf("\n%d X %d = %d", num, i, num * i);
    }
    return;
}
/*------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n");
    system("pause");
}
/*------------------------------------------------------*/