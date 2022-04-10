/*-------------------------Docuentation Section ----------------------------*/
/*      for print pattern using for loop 
       =============================================

        Welcome to polytechnic college Ujjain

       =============================================     */
/*------------------------Preprocessor Directives --------------------------*/

#include <stdio.h>//cotains the pintf(),scanf(),getchar() build in function
#include <conio.h>//contains the getch(),getche() build in function
#include<stdlib.h>
/*---------------- Prototype Function declaration------------------*/

void college();
void input();
void loop();

/*------------------------------------------------------*/
int main()
{   system("cls");
    input();
    return 0;
}
/*------------------------------------------------------*/
void college()
{
    printf("\n\n");
    printf("\t\a\t Welcome to Polytechnic College ");
    printf("\n\n");
}
/*------------------------------------------------------*/
void loop()
{
    printf("\t");
    for (int i = 0; i < 45; i++)
    {
        printf("=");
       
    }
}
/*------------------------------------------------------*/
void input()
{
    for (;;)
    {
        loop();
        college();
        loop();
        getchar();
    }
    return;
}
/*------------------------------------------------------*/