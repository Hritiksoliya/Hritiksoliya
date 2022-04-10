#include <stdio.h>
#include <stdlib.h>

void hold_it(void);
void mainmenu(void);
int main()
{   system("cls");
    mainmenu();
    hold_it();
    return 0;
}

void mainmenu(void)
{
    printf("\n\t MAIN MENU");
    printf("\n-------------------------------");
    printf("\n\n\tA -Word Perfect");
    printf("\n\n\tB -Lotus 1-2-3");
    printf("\n\n\tC -D.BASE IV");
    printf("\n\n\tD -Auto CAD");
    printf("\n-------------------------------");
    return;
}
void hold_it(void)
{
    printf("\n");
    system("pause"); //-in place of 'getch()'and 'printf()'
    // printf("\n\n\a press any key to continue.....\n\n");
    // getch();
    return;
}