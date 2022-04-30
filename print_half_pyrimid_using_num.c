/*-----------Docuentation Section ----------*/
/*----Program to print half pyramid a using numbers-----*/
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
    printf("\nEnter the raw of pyramid");
    scanf("%d", &num);
    int loop = 1;
    for (int j = 1; j <= num; j++)
    {
        for (int i = 1; i <= loop; i++)
        {
            printf("%d", i);
        }
        loop++;
        printf("\n");
    }
    return;
}
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
    return;
}