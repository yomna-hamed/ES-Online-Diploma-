#include <stdio.h>
#include <stdlib.h>

//Find the factorial of a number
int main()
{
    int x;
    int fact = 1;
    printf("Enter an integer: ");
    scanf("%d",&x);
    if(x>=0) {
        for(int i=1;i<=x;i++) {
        fact *=i;
    }
        printf("Factorial = %d",fact);
    }
    else {
            printf("Error!!! Factorial of negative numbers doesn't exist");
    }
    return 0;
}
