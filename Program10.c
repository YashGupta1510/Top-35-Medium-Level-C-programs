//C program TO find GCD of 2 positive integers....

#include <stdio.h>

/*Recursive way*/
long gcd(long x, long y) 
{
  if (y == 0) {
  	return x;
  }
  else {
    return gcd(y, x % y);
  }
}

/*Without recursion
long gcd(long x, long y) 
{
	if (x == 0) 
	{
  		return y;
  	}
 	while (y != 0) 
 	{
    	if (x > y) 
    	{
      		x = x - y;
        }
    	else 
    	{
      		y = y - x;
    	}
  	}
  	return x;
}*/

int main()
{
   int Num1,Num2;
   int result=0;
   printf("Please Enter two integer Values \n");
   scanf("%d %d", &Num1, &Num2);
   printf("GCD of %d and %d is = %d", Num1, Num2, 	gcd(Num1, Num2));
   
   return 0;
}
