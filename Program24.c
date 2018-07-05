//C program for checking all bits are set to 1 or not....
//https://www.geeksforgeeks.org/check-bits-number-set/

#include <stdio.h>

int main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);
    if ((num & (num+1))==0)
        printf("All bits are set");
    else
        printf("All bits are not set");

    return 0;
}
