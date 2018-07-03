//C program for converting a decimal number into equivalent binary number....

#include<stdio.h>

//recursive function
double BinaryNumber(int num)
{
	if(num==0)
	 	return 0;
	else
		return (num%2)+10*BinaryNumber(num/2);
}

/*int BinaryNumber(int num)
{
	int rem;
	double binary=0;
	int base=1;
	while(num>0)
	{
		rem=num%2;
		binary=binary+rem*base;
		num=num/2;
		base=base*10;
	}
	return binary;
}*/

int main()
{
	int num;
	double result;
	printf("Enter a number ");
	scanf("%d",&num);
	result = BinaryNumber(num);
	printf("%0.f is the binary number of %d ",result,num);
 	return 0;
}
