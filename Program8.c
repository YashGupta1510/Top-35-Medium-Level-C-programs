
//C program for calculating simple interest...

#include <stdio.h>

int main()
{
    unsigned int principle;
    float rate;
    int year;
    float sinterest;
    printf("Enter Principle amount ");
    scanf("%u",&principle);
    printf("Enter Rate of interest per annum ");
    scanf("%f",&rate);
    printf("Enter No of years ");
    scanf("%i",&year);
    sinterest = principle*rate*year/100;
    printf("%.2f is Simple Interest for principle amount %u for %d years at %.1f\% rate of Interest",sinterest,principle,rate,year);
    

    return 0;
}
