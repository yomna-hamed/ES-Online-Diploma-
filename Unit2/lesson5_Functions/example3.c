#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse_Sentence(int x,char arr[],int size1);

int main()
{
    char arr[50];
    int x;
    printf("Enter a sentence: ");
    gets(arr);
    x = strlen(arr);
    Reverse_Sentence(x,arr,50);
    return 0;
}

void Reverse_Sentence(int x,char arr[],int size1) {
    //int i = size1;
    //int j = 0;
    printf("%c",arr[x]);
    x--;
    if(x>=0) {
        Reverse_Sentence(x,arr,50);
    }
}
