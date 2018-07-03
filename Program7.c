//C program to check whether a character is Odd or Even...

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is an Even number",number);
    }
    else
    {
        printf("%d is an Odd number",number);
    }

    return 0;
}
