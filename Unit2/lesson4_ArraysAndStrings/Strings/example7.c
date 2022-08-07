#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[30];
    int i;
    printf("Enter a string: ");
    gets(a);
    for(i=0;a[i]!=0;i++);
    printf("length of string: %d",i);
    return 0;
}
