/*-----------Docuentation Section ----------*/
/*find largest element of 10 element*/
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
    int a[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the %d element \n",i+1);
        scanf("%d",&a[i]);
    }
    int max=0;
    for(int i=0;i<10;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    printf("the largest element of array is %d",max);
}
void hold_it(void)
{
    printf("\n\n\t");
    system("pause");
}