#include<stdio.h>
int main()
{
//A programm to calculate quotient&remainder:
int quotient,remainder,divisor,dividend;
printf("Enter the value of dividend: ");
scanf("%d",&dividend);
printf("Enter the value of divisor: ");
scanf("%d",&divisor);

quotient=dividend/divisor;
remainder=dividend%divisor;
printf("The quotient is :  %.2d.\n",quotient);
printf("The remiander is: %.2d.\n",remainder);





return 0;
}
