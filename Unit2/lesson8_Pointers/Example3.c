//Reverse a sentence using pointers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[200];
    char* p;
    int i;
    printf("Input a string : ");
    gets(arr);
    p = &arr[strlen(arr)-1];
    for(i=0;i<=strlen(arr);i++) {
        printf("%c",*p);
        p--;
    }
    return 0;
}
