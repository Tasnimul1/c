#include<stdio.h>
int main()
{
//A programm to calculate power:
int base,power,result;
printf("Enter the value of base: ");
scanf("%d",&base);
printf("Enter the value of power: ");
scanf("%d",&power);
result=pow(base,power);
printf("The result is %d.",result);

 return 0;
}



