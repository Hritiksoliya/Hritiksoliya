/*-----------Docuentation Section ----------*/
/* Inverted half pyramid using stars (*) */
/*---------------Preprocessor Directives ---------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*---------- Prototype Function declaration-------------*/
void input(void);
void hold_it(void);
int main()
{
    input();
    hold_it();

    return 0;
}
void input()
{
    system("cls");
    int num;
    printf("\nEnter the raw of pyramid :");
    scanf("%d", &num);
    printf("\n\n\n\t");
    for (int j = num; j >= 0; j--)
    {
        for (int i = 0; i < num; i++)
        {
            printf("* ");
        }
        printf("\n\t");
        num--;
    }
    return;
}
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
     return;
}