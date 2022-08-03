#include <stdio.h>
#include <stdlib.h>

//Sum of natural numbers
int main()
{
    int x,sum;
    printf("Enter an integer: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++) {
        sum +=i;
    }
    printf("Sum = %d",sum);
    return 0;
}
