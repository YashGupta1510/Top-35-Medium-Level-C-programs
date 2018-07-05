//C program for calculating sum of array elements....

#include <stdio.h>

int main()
{
    int arr[10];
    int i,sum=0;
    printf("Enter 10 numbers\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\nSum of Array elements is %d ",sum);
    
    return 0;
}
