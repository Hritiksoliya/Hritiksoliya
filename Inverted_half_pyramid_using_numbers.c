#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void hold_it(void)
{
    printf("\n");
    system("pause");
    return;
}
void input(void);

int main()
{
    input();
    hold_it();
    return 0;
}
void input(void)
{
    system("cls");
    int num;
    printf("Enter Row of pyramid:");
    scanf("%d", &num);
    for (int j = num; j != (-1); j--)
    {
        for (int i = 1; i <= num; i++)
        {
            printf("%d ", i);
        }
        num--;
        printf("\n");
    }
}