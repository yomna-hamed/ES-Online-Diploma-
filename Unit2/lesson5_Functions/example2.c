//Find Factorial using recursive  function

#include <stdio.h>
#include <stdlib.h>

int Factorial(int x);
int fact = 1;

int main()
{
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    printf("Factorial of %d = %d",x,Factorial(x));
    return 0;
}

int Factorial(int x) {
    fact *= x;
    x--;
    if(x>1) {
        Factorial(x);
    }
    else {
        return fact;
    }
}

