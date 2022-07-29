/*-----------Docuentation Section ----------*/
/*file pointer making*/
/*---------------Preprocessor Directives ---------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>
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
    FILE *fp;
    char c;
    int line = 0, ch = 0, sp = 0, tb = 0;
    char name[15];
    printf("enter file name :\n");
    scanf("%s", &name);
    fp = fopen(name, "r");
    if (fp == NULL)
    {
        printf("flie can not open");
    }
    else
    {
        while (1)
        {
            c = fgetc(fp);
            printf("%c",c);
            if (c == EOF)
                break;
            ch++;
            if (c == ' ')
                sp++;
            if (c == '\n')
                line++;
            if (c == '\t')
                tb++;
        }
        fclose(fp);
        printf("\nNumber of lines is =%d", line);
        printf("\nNumber of spaces is =%d", sp);
        printf("\nNumber of characters is =%d", ch);
        printf("\nNumber of tab is =%d", tb);
    }
}
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
}