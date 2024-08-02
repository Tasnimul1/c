#include<stdio.h>
int main()

{
//A programm to determine grade:
    int m;
    printf("Enter the number: ");
    scanf("%d",&m);


    if(80<=m&&m<=100)
    {
        printf("You got A+.");
    }
    else if(70<=m&&m<=79)
    {
        printf("You got A.");
    }
    else if(60<=m&&m<=69)
    {
        printf("You got B+.");

    }

    else if(50<=m&&m<=59)
    {
        printf("You got B.");
    }

    else if(40<=m&&m<=49)

    {
        printf("You got C+.");

    }
    else if(0<=m&&m<=39)
    {
        printf("You are falied.");
    }
    else
    {
        printf("invaild input.");
    }

    return 0;
}
