/*-----------Docuentation Section ----------*/
// for loop ---to print Fibonachi num
/*---------------Preprocessor Directives ---------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*---------- Prototype Function declaration-------------*/
void input(void);
void hold_it(void);
/*------------------------------------------------------*/
int main()
{
    input();
    hold_it();
    return 0;
}
/*------------------------------------------------------*/
void input(void)
{
    int t1=0,t2=1;
    int n;
    int next=t1+t2;
    printf("Enter the number of terms: ");
  scanf("%d", &n);
    for (int i = 1;i< n;++i)
    {
        printf("\n\t--> %d",next );
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    return;
}
/*------------------------------------------------------*/
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
    return;
}
/*------------------------------------------------------*/
