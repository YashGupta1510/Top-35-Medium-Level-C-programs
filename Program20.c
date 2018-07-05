//C program for Reversing elements of an Array....
//For recursive method see link : https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
// for string read this : https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/

#include <stdio.h>

void ReverseArray(int *p,int n)
{
    int i=0,j=n-1;
    int temp;
    while(i<=j)
    {
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[10];
    int i;
    printf("Enter 10 numbers\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Array elements are \n");
    for (i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    ReverseArray(arr,10);
    printf("\nArray elements after reverse are \n");
    for (i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
