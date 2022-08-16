#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,y=10;
    printf("Before swap:\nx = %d\ny = %d\n",x,y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("After swap:\nx = %d\ny = %d",x,y);
    return 0;
}
