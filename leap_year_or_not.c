/*-----------------Docuentation Section -------------*/

/*--This Program Checks Whether The Year Is Leap Or Not--*/

/*---------------Preprocessor Directives --------------*/

#include <stdio.h>  //contain the printf(),scanf(),getcha(), build in function
#include <conio.h>
#include <stdlib.h>

/*-----------Prototype function declaration-----------*/

void year(void);
void hold_it(void);

/*-----------------------------------------------------*/

int main()
{
    /*------------call the function-----------*/
    year();
    hold_it();
    return 0;
}

/*-----------------------------------------------------*/

void year(void)        // user define function/sub function
{
    int year;
    
    printf("\n\n--Enter the year you want to check");
    scanf("%d", &year);
    if ((year % 4 == 0) ||
    
     (year % 100 == 0) || (year % 400 == 0))
    {
        printf("\n\n--leap year");
    }
    else
    {
        printf("\n\n--Not leap year");
    }
}

/*-----------------------------------------------------*/

void hold_it(void)
{
    printf("\n\n");
    system("pause");;
}

/*-----------------------------------------------------*/