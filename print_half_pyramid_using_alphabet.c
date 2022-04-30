/*-----------Docuentation Section ----------*/
/*----Program to print half pyramid a using Alphabets-----*/
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
    if (num <= 26)
    {
        for (int j = 1; j <= num; j++)
        {
            for (int i = 65, k = 1; k <= loop; i++, k++)
            {
                printf("%c", i);
            }
            loop++;
            printf("\n");
        }
    }
    else{
    printf("\n Only 26 alphabet is there in english ");
    }
    return;
}
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
    return;
}