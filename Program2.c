//C program to check Leap year.....
//Please carefully check conditions of a leap year

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year ");
    scanf("%d",&year);
    if (year%4==0)
    {
        if(year%100==0)               //1900 is not a leap year
        {
            if (year%400==0)
                printf("%d is a leap year",year);
            else
                printf("%d is not a leap year",year);
        }
        else
            printf("%d is a leap year",year);
    }
    else
        printf("%d is not a leap year",year);
        
    return 0;
}
