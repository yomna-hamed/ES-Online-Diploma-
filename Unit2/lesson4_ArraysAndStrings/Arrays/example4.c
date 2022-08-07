#include <stdio.h>
#include <stdlib.h>

//insert an element in an array
int main()
{
    int a[20];
    int number,element,location,i;
    printf("Enter no of elements : ");
    scanf("%d",&number);

    //storing elements in the array
    for(i=0;i<number;i++) {
        scanf("%d",&a[i]);
    }

    //enter element and its location
    printf("Enter the element to be inserted : ");
    scanf("%d",&element);
    printf("Enter the location : ");
    scanf("%d",&location);

    //display array after inserting
    for(i=1;i<=number;i++) {
        if(i==location) {
            printf("%d ",element);
        }
        printf("%d ",a[i-1]);
    }
    return 0;
}
