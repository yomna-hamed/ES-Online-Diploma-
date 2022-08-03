#include <stdio.h>
#include <stdlib.h>

//Find ASCI value of characters
int main()
{
    char x;
	char asci;
	printf("Enter a character: ");
	scanf("%c",&x);
	asci = x;
    printf("ASCII value of %c = %d",x,asci);
    return 0;
}
