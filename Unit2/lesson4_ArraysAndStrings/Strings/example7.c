#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[30];
    int i=0,counter;
    printf("Enter a string: ");
    gets(a);
    while(a[i]!=0) {
        counter++;
        i++;
    }
    printf("length of string: %d",counter);
    return 0;
}
