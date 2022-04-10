/*-----------------Docuentation Section -------------*/
/*this C program is calculate the area of circle----- */
/*---------------Preprocessor Directives --------------*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*-----------Prototype function declaration-----------*/

void hold_it(void);
float area(float rl);
void input(void);

/*-------------Globlal varible declaration------------*/

const float pi = 3.14;

/*-----------------------------------------------------*/
int main()
{
/*------------call the function-----------*/
    input();
    hold_it();
    return 0;
}
/*-----------------------------------------------------*/
float area(float rl)
{
    float area = pi * rl * rl;
    return area;
}
/*-----------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n");
    system("pause");;
}
/*-----------------------------------------------------*/
void input(void)
{
     /*-----"Attributs" = "variables" declare outside
     a method in class a.k.a. "fileds"--------------*/
    float r, s;
    system("cls");
    printf("\n\n\t Enter the value of Radius r");
    scanf("%f", &r);

    /*--"Arguments"= values given to a method as
     its--->Parancess whenth method is aaked----*/

    /*--call the function---*/
    /*--variable name =function name(arguments)-*/
    s = area(r);

    printf("\n\n\t The area is =%f", s);
}
/*-----------------------------------------------------*/