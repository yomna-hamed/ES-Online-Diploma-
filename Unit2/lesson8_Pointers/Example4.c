//print elements of the array in reverse order

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15],num,*p,i,j;
    printf("Input the number of elements : ");
    scanf("%d",&num);
    j = num;

    printf("\nInput %d number of elements in the array :\n",num);
    for(i=0;i<num;i++) {
        printf("element-%d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nElements in reverse order are :\n");
    p = &arr[num-1];
    for(i=0;i<num;i++) {
        printf("element-%d :%d\n",j,*p);
        p--;
        j--;
    }
    return 0;
}
