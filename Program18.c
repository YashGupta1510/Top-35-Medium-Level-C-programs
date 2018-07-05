//C program for printing smallest and greatest element in array..
//Have a look on it(tournament method): https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

//this program is based on linear search method
#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    int min;
    int max;
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
    min=max=arr[1];
    for (i=1;i<10;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        else if(arr[i]>max)
        {
            max=arr[i];
        }
        else
            continue;
    }
    printf("\nMinimum number in array = %d",min);
    printf("\nMaximum number in array = %d",max);
    
    return 0;
}
