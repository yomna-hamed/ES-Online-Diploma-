#include <stdio.h>
#include <stdlib.h>

//Swap two numbers
int main()
{
    float a,b;
	float temp;
	printf("Enter value of a: ");
	scanf("%f",&a);
	printf("Enter value of b: ");
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %.2f \n",a);
	printf("After swapping, value of b = %.1f",b);
	return 0;
}
