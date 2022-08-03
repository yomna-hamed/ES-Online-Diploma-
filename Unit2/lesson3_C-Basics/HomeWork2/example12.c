#include <stdio.h>
#include <stdlib.h>

//check alphabet or not
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if(x<65||x>122) {
        printf("%c is not an alphabet",x);
    }
    else if(x>90&&x<97) {
        printf("%c is not an alphabet",x);
    }
    else {
        printf("%c is an alphabet",x);
    }
    return 0;
}
