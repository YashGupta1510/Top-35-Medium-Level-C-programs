//C program to check whether a character is Uppercase or Lowercase.....

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an character ");
    scanf("%c",&ch);
    //See how typecasting works?
    //We can also write character 'A', 'Z' instead of 60 and 90 respectively without any typecasting
    if((int)ch >=60 && (int)ch<=90) 
        printf("%c is a uppercase character",ch);
    //without typecasting
    else if(ch>='a' && ch<='z')
        printf("%c is a lowercase character",ch);
    else
        printf("You have Entered invalid character!");
    

    return 0;
}
