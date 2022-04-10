#include<stdio.h>  //contains the printf() ,scanf(),getcha(), build in function
#include<conio.h> //contains the getch(),getche() build in function
#include<stdlib.h> 

/*---------Proto type function declaration---------*/

void hold_it(void);
void message(void);

/*-------------------------------------------------*/

int main()
    {
        system("cls");
        message();
        message();
        hold_it();
        
        return 0;
    }
/*--------------------------------------------------*/
void message(void)
{
    printf("\n\n Hello Wrold ------------ C  Language \n\n\a");

}
/*---------------------------------------------------*/
void hold_it(void)  //-User defined Function /sub function
{
    printf("\n\n");
    system("pause"); //-in place of 'getch()'and 'printf()'
    printf("\n\n\a press any key to continue.....\n\n");
    // system("pause");
    //puts("\n\n\a press any key to continue.....\n\n");
//    getch();
    return;
    }

/*---------------------------------------------------*/