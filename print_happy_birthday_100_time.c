/*-------------------------Docuentation Section ----------------------------*/
/*      for print pattern using for loop
         -------------------------------------------------
                       Happy Birth Day
         -------------------------------------------------    */
/*------------------------Preprocessor Directives --------------------------*/

#include <stdio.h> //cotains the pintf(),scanf(),getchar() build in function
#include <conio.h> //contains the getch(),getche() build in function
#include <stdlib.h>

/*---------------- Prototype Function declaration------------------*/
void hold_it(void);
void college(void);
void loop(void);
void repet(void);
void warning(void);

/*------------------------------------------------------*/
int main()
{
    system("cls");
    warning();
    repet();
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void college()
{
    printf("\n");
    printf("\t\a\t Happy Birth Day ");
    printf("\n\n");
}
/*------------------------------------------------------*/
void loop()
{
    printf("\t");
    for (int i = 0; i < 45; i++)
    {
        printf("-");
    }
     printf("\n");
     return;
}
void repet(void)
{
    for (int i = 0; i < 101; i++)
    {
        loop();
        college();
        loop();
    }
    return;
}
void warning(void)
{
    printf("\n\tWARNING !!!!!!!\n\t:This loop will run 100 time\n\t:for terminate loop ,Press Ctrl+C");
    printf("\n\tPress Enter To Continue\n");
    getchar();
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