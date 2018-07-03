//C program for Fibonacci Sequence Up to a Certain Number....

#include <stdio.h>

int main()
{
    int term1 = 0, term2 = 1, nextTerm = 0, num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", term1, term2);

    nextTerm = term1 + term2;

    while(nextTerm <= num)
    {
        printf("%d, ",nextTerm);
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }

    return 0;
}
