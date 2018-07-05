//Binary search using recursion
//without recursion : https://codescracker.com/c/program/c-program-binary-search.htm

#include<stdio.h>

int binary_search(int arr[],int m,int s,int e)
{

     int mid,c=0;

     if(s<=e)
     {
          mid=(s+e)/2;
          if(m==arr[mid])
	  {
              return mid;
          }
          else if(m<arr[mid])
	  {
              return binary_search(arr,m,s,mid-1);
          }
          else
              return binary_search(arr,m,mid+1,e);
     }
     else
       return c;
}

int main()
{

    int arr[10],i,n,m,result,start,end;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: " );
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&m);

    start=0,end=n-1;
    result=binary_search(arr,m,start,end);
    if(result==0)
         printf("Number is not found.");
    else
         printf("Number is found at index %d",result);

    return 0;
 }

