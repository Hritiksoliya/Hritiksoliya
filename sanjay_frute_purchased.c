/*: Sanjay goes to market for buying some fruits
and vegetables. He is having a currency of Rs 500 with him for marketing.
From a shop he purchases 2.0 kg Apple priced Rs. 50.0 per kg, 1.5 kg Mango
priced Rs.35.0 per kg, 2.5 kg Potato priced Rs.10.0 per kg, and 1.0 kg Tomato
priced Rs.15 per kg. He gives the currency of Rs. 500 to the shopkeeper. Find
out the amount shopkeeper will return to Sanjay. and also tell the total item
purchased*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float buying();
void hold_it();
int main()
{       system("cls");
    buying();
    hold_it();
    return 0;
}
float buying()
{
    int apple, mango, potato, tomato;
    float wapple, wmango, wpotato, wtomato;
    float A, M, P, T, total;
    printf("\n\nEnter APPLE price in Rs/kg :");
    scanf("%d", &apple);
    printf("\n\nEnter MANGO price in Rs/kg :");
    scanf("%d", &mango);
    printf("\n\nEnter POTATO price in Rs/kg :");
    scanf("%d", &potato);
    printf("\n\nEnter TOMATO price in Rs/kg :");
    scanf("%d", &tomato);
    printf("\n---------------------------------------");
     printf("\n---------------------------------------");
    //--------------------------------------------//

    printf("\n\nEnter wet of APPLE in kg :");
    scanf("%f", &wapple);
    printf("\n\nEnter wet of MANGO in kg :");
    scanf("%f", &wmango);
    printf("\n\nEnter wet of POTATO in kg :");
    scanf("%f", &wpotato);
    printf("\n\nEnter wet of TOMATO in kg :");
    scanf("%f", &wtomato);
 printf("\n---------------------------------------");
  printf("\n---------------------------------------");
    A = apple * wapple;
    M = mango * wmango;
    P = potato * wpotato;
    T = tomato * wtomato;
    total = A + M + P + T;

    printf("\n\nTotal APPLE price is %f:",A);
    printf("\n\nTotal MANGO price is %f:",M);
    printf("\n\nTotal POTATO price is %f:",P);
    printf("\n\nTotal TOMATO price is %f:",T);
        printf("\n\nSanjay bought fruits and vegetables worth Rs.:%f ", total);

        printf("\n\namount shopkeeper will return to Sanjay is :%f",total-500);
        printf("\n---------------------------------------");
         printf("\n---------------------------------------");
}

void hold_it(void)
{
    printf("\n\n");
    system("pause");
    return;
}