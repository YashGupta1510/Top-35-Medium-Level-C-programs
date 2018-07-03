//C program for swapping of integer....

#include<stdio.h>

//swap using temporary variable....
void swap1(int *n1, int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}

//swap without using temp...
void swap2(int *n1, int *n2)
{
	*n1=*n1+*n2;
	*n2=*n1-*n2;
	*n1=*n1-*n2;
}

//swap using XOR..
void swap3(int *n1, int *n2)
{
	*n1=*n1^*n2;
	*n2=*n1^*n2;
	*n1=*n1^*n2;
}

int main()
{
	int num1,num2;
	printf("Enter first number ");
	scanf("%d",&num1);
	printf("Enter second number ");
	scanf("%d",&num2);
	printf("Before swapping Num1=%d and Num2=%d\n",num1,num2);
	swap1(&num1,&num2);												//function calling by call by reference.....
	printf("After swapping using temp Num1=%d and Num2=%d\n",num1,num2);
	swap2(&num1,&num2);
	printf("After swapping using arithematic Num1=%d and Num2=%d\n",num1,num2);
	swap3(&num1,&num2);
	printf("After swapping using XOR Num1=%d and Num2=%d\n",num1,num2);

 	return 0;
}
