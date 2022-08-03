#include <stdio.h>
#include <stdlib.h>

//Find largest number
int main()
{
    float x,y,z;
	printf("Enter three numbers: ");
	scanf("%f %f %f",&x,&y,&z);
	if (x>y) {
		if (x>z) {
			printf("Largest number = %.2f",x);
		}
		else {
			printf("Largest number = %.2f",z);
		}
	}
	else if (y>x) {
		if (y>z) {
			printf("Largest number = %.2f",y);
		}
		else {
			printf("Largest number = %.2f",z);
		}
	}
	else {
		if (x>z) {
			printf("Largest number = %.2f",x);
		}
		else if (z>x) {
			printf("Largest number = %.2f",z);
		}
		else {
			printf("three numbers are equal");

		}
	}
    return 0;
}
