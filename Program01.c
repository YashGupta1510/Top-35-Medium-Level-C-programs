//Program to find maximum number among 3 numbers using ternary operator in C....

#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;
    printf("Enter first number ");
    scanf("%d",&number1);
    printf("Enter second number ");
    scanf("%d",&number2);
    printf("Enter third number ");
    scanf("%d",&number3);
    //find maximum number with help of ternary operator..
    int max= number1>number2? ((number1>number3)? number1:number3):((number2>number3)? number2:number3);
    printf("Greatest integer is %d\n",max);
    //find maximum number with if else statments..
    if (number1>number2)
    {
        if (number1>number3)
            printf("Greatest integer is %d", number1);
        else
            printf("Greatest integer is %d", number3);
    }
    else
    {
        if (number2>number3)
            printf("Greatest integer is %d", number2);
        else
            printf("Greatest integer is %d", number3);
    }
    
    return 0;
}
