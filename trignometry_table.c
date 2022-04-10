/*-----------Docuentation Section ----------*/
// for loop ---to print Trignomentry table
/*---------------Preprocessor Directives ---------------*/
#include <stdio.h> //contain the printf(),scanf(),getcha(), build in function
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
/*---------- Prototype Function declaration-------------*/
void input(void);
void hold_it(void);
void forloop(void);
void line(void);
/*------------------------------------------------------*/
int main()
{
    forloop();
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void hold_it(void)     // user define function/sub function
{
    printf("\n\n\t");
    system("pause");
    return;
}
/*------------------------------------------------------*/
void forloop()
{
    system("cls");
    float r;
    int mk = 1;
    printf("\n\n\t\t\t\t\tTrignometry table");
    printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n");
    line();
    printf("\n\tAngle \t\t Sin \t\t Cos \t\t Tan \t\t Cot \t\t Sec \t\t Cosesc\n");
    line();
    for (int i = 0; i <=360; i=i+30)
    {
        if((mk==3)||(mk==4)||(mk==7)||(mk==8)||(mk==11)||(mk==12)||(mk==15)||(mk==16))
        {
            i=i-15;
        }
        r=i*3.14159/180;                // redian = degree *(PI/180);  //where PI=3.14159
        printf("\n\t%3d \t\t %5.2f \t\t %5.2f \t\t %5.2f \t\t %5.2f \t\t %5.2f \t\t %5.2f\n",i,  sin(r), cos(r), tan(r), 1/tan(r), 1/cos(r), 1/sin(r));
        mk++;
    }
    line();
    return;
}
/*------------------------------------------------------*/
void line(void)
{ printf("\t");
    for (int i = 0; i <= 33; i++)
    {
        printf("- -");
    }
    return;
}
/*------------------------------------------------------*/