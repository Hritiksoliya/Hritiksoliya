/*-----write a program for find 10 player age avrrege----*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*-------Prototype function declaration--------*/

float average();
void hold_it(void);

/*--------------------------------------------*/

int main()
{
    average();
    hold_it();
}
/*--------------------------------------------*/

float average()
{
    float age[10], total, avg;
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter age of %d Player :", i + 1);
        scanf("%f", &age[i]);
        printf("\n--------------------------------");
    }
    for (int i = 0; i < 10; i++)
    {
        total = age[i] + total;
    }
    avg = total / 10;

    printf("\n\nAverage of 10 player is %.3f", avg);
    printf("\n--------------------------------");
}
void hold_it(void)
{
    printf("\n\n");
    system("pause"); //-in place of 'getch()'and 'printf()'
   // printf("\n\n\a press any key to continue.....\n\n");
    // system("pause");
    // puts("\n\n\a press any key to continue.....\n\n");
    // getch();
}