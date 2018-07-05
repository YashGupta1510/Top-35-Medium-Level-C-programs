//C program for calculating prime upto 1000.....
//Please undersatnd this program: https://github.com/DreamITJob/Basic-C-Programs/blob/master/Program4.c
//After doing this program please see below links:
//https://stackoverflow.com/questions/2468412/finding-a-prime-number-after-a-given-number
//https://www.geeksforgeeks.org/prime-numbers-after-prime-p-with-sum-s/
#include <stdio.h>

int Prime(int number)
{
    int i;
    int count=0;
    
	for ( i=2;i<=number/2;i++)				
	{
		if (number%i == 0)
		{
				count++; //counting the number of factors
		}	
	}
	if(count==0)
	    return 1;
	else
	    return 0;
}

int main()
{
    int i=2;
    int count=1;
    printf("%d,",i);
    for(i=3;i<=1000;i++) 
    {
        if(Prime(i))
        {
            printf("%d, ",i);
            count++;
        }
    }
    printf("\ntotal numbers of count of prime numbers up to 1000 is %d",count);

    return 0;
}

 
