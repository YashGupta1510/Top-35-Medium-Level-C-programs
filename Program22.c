//C Program for find length of a string without any in-built function....

#include <stdio.h>

int main()
{
    char *str="Karan Arora";
    int i;
    int count=0;
    while(*str)
    {
        count++;
        str++;
    }
    
    printf("Length of string is % d",count);

    return 0;
}
