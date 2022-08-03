#include <stdio.h>
#include <stdlib.h>

//sum of two integers
int main()
{
    int x,y;
	int sum;
	printf("Enter two integers: ");
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("sum: %d",sum);
    return 0;
}
