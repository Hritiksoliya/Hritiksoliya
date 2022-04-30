/*-----------Docuentation Section ----------*/
/* Program to print half pyramid using stars (*)*/
/*---------------Preprocessor Directives ---------------*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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
    printf("\nEnter the raw of pyramid:");
    scanf("%d", &num);
    printf("\n\t");
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("* ");
        }
        printf("\n\t");
    }
    return;
}
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
    return;
}