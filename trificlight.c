#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j = 1;
    for (int i = 0;; i++)
    {
        if (i < 600)
        {
            
            printf("green light");
            if (i % 13 == 0)
            {
                j++;
            }
            printf("\n%d second", j);
        }
        if (i > 600 && i < 1000)
        {
            if(i>=600&&i<=601)
            {
                j=0;
            }
            printf("red light");
            if (i % 13 == 0)
            {
                j++;
            }
            printf("\n%d second", j);
        }
        if (i > 1000 && i < 1200)
        {
            if(i>=1000&&i<=1002)
            {
                j=0;
            }
            printf("yellow light");
            if (i % 13== 0)
            {
                j++;
            }
            printf("\n%d second", j);
        }
        if (i > 1200)
        {
            i = 0;

        }
        system("cls");
    }
    return 0;
}