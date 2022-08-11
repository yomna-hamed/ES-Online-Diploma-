//Calculate power using Recursive function;

#include <stdio.h>
#include <stdlib.h>

int Calc_Power(int base,int power);

int main()
{
    int base,power;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&power);
    printf("%d^%d = %d",base,power,Calc_Power(base,power));
    return 0;
}

int Calc_Power(int base,int power) {
    if(power!=0) {
        return(base*Calc_Power(base,power-1));
    }
    else {
        return 1;
    }
}
