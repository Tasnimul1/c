#include<stdio.h>
int main()
{
//A programm to calculate area of tringle:
float base,height,area;
printf("Enter the value of base:   ");
scanf("%f",&base);
printf("Enter the value of height: ");
scanf("%f",&height);

area=0.5*base*height;
printf("The area is %.2f.\n",area);

return 0;
}
