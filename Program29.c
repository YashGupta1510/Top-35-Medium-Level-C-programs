//C Program for moving zero at the end of an array.....

#include <stdio.h>

int main()
{
    int arr[10]={0,0,2,3,0,4,5,0,6,0};
    int i=0;
    int count=0;
    for(i;i<10;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    for (i=count;i<10;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
