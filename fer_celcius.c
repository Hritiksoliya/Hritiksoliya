#include<stdio.h>
int main()
{
  float fer ,cel;
  printf("enter value in fer");
  
  scanf("%f",&fer);

   cel=(float)(fer-32)/1.8;
   printf("fernh %f in celcius%f",fer,cel);
   return 0;

}