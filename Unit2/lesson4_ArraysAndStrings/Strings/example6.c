#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Find Frequency of a character in a string
    char a[50];
    int i,counter=0;
    char element;
    printf("Enter a string: ");
    gets(a);
    printf("Enter a character to find frequency: ");
    scanf("%c",&element);
    for(i=0;i<sizeof(a)&&a[i]!=0;i++) {
        if(a[i]==element) {
            counter++;
        }
    }
    printf("Frequency of %c = %d ",element,counter);
    return 0;
}
