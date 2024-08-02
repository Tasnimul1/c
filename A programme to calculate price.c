#include<stdio.h>
int main()
{
//A programm to calculate price:
float fish,beef,rice,total,Gamount,Ramount;
printf("Enter the price of fish: ");
scanf("%f",&fish);
printf("Enter the price of beef: ");
scanf("%f",&beef);
printf("Enter the price of rice: ");
scanf("%f",&rice);

total=fish+beef+rice;
printf("Your total price is %.2f.\n",total);
printf("Enter the Gamount: ");
scanf("%f",&Gamount);

Ramount=Gamount-total;
printf("Your return amount is %.2f.\n",Ramount);

return 0;


}
