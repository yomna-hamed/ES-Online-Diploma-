#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,element,i;
    int a[20];
    printf("Enter no of elements : ");
    scanf("%d",&number);

    for(i=0;i<number;i++) {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&element);

    for(i=0;i<number;i++) {
        if(a[i]==element) {
            printf("Number found at location %d",i+1);
            break;
        }
    }
    return 0;
}
