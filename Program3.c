//Program for printing 1 to 100 numbers without loops...

#include <stdio.h>

int PrintCount(int num)
{
    if(num!=101)
    {
        printf("%d ",num);
        PrintCount(++num);
    }
    else
    return 0;
}

int main()
{
    int num=1;
    PrintCount(num);
    
    return 0;
}
