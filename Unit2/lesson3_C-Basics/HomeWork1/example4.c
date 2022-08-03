#include <stdio.h>
#include <stdlib.h>

//Product of two numbers
int main()
{
    float x,y;
	float product;
	printf("Enter two numbers: ");
	scanf("%f %f",&x,&y);
	product = x*y;
	printf("Product: %.5f",product);
    return 0;
}
