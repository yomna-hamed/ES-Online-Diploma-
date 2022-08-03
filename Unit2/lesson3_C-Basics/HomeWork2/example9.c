#include <stdio.h>
#include <stdlib.h>

//check vowel or consonant
int main()
{
    char x;
	printf("Enter an alphabet: ");
	scanf("%c",&x);
	if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='u'||x=='U'||x=='o'||x=='O') {
		printf("%c is vowel",x);
	}
	else {
		printf("%c is consonant",x);
	}
    return 0;
}
