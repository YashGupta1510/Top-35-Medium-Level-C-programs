//C Program for segregate 0,1 in an array.....
//https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

#include <stdio.h>

int main()
{
    int arr[10]={0,1,1,1,1,1,1,1,1,0};
    int i=0,j=9;
    int temp;
    
    while(i<j)
    {
        if (arr[i]==0 || arr[j]==1)
        {
            if(arr[i]==0)
            i++;
            if(arr[j]==1)
            j--;
        }
        else
        {
            temp=arr[i];
            arr[i++]=arr[j];
            arr[j--]=temp;
        }
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
