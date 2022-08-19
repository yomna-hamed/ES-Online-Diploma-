//print all alphabets using pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char arr[27],*p = arr;
    for(i=65;i<=90;i++) {
        *p = (char)i;
        p++;
    }

    p = arr;

    printf("Alphabets are: \n");
    for(i=0;i<27;i++) {
        printf("%c ",*p);
        p++;
    }

    return 0;
}
