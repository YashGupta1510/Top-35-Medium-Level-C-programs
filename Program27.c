//C program to check a string is pallindrome....
//to check number is pallindrome or not? see link:https://www.programiz.com/c-programming/examples/palindrome-number

#include<stdio.h>
#include<string.h>

int main()
{
	char *str="geeks";
	int n=strlen(str);
	int i=0,j=n-1;
	while(i<j)
	{
		if (str[i++]!=str[j--])
		{
			printf("string is not pallindrome");
			return;
		}	
			
	}
	printf("String is pallindrome");
	
 	return 0;
}
