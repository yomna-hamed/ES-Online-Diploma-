#include <stdio.h>
#include <stdlib.h>

//check positiver or negative
int main()
{
    float x;
	printf("Enter a number: ");
	scanf("%f",&x);
	if(x<0) {
		printf("%.2f is negative",x);
	}
	else if(x==0) {
		printf("You entered zero");
	}
	else {
        printf("%.2f is positive",x);
	}
    return 0;
}
