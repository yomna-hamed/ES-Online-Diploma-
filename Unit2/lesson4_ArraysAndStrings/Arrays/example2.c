#include <stdio.h>
#include <stdlib.h>

//calculate average using arrays
int main()
{
    int i,number;
    float x[10],sum=0,average;
    printf("Enter the number of data: ");
    scanf("%d",&number);
    for(i=0;i<number;i++) {
        printf("%d. Enter number: ",i+1);
        scanf("%f",&x[i]);
        sum += x[i];
    }
    average = sum/number;
    printf("Average = %0.2f",average);
    return 0;
}
