//Adding two distances in inch-feet system using structures

#include <stdio.h>
#include <stdlib.h>

struct Sdistane {
    float feet;
    float inch;
} D1,D2,sum;

int main()
{
    //first distance
    printf("Enter information for 1st distance:\n");
    printf("Enter Feet: ");
    scanf("%f",&D1.feet);
    printf("Enter inch: ");
    scanf("%f",&D1.inch);

    //second distance
    printf("\nEnter information for 2nd distance:\n");
    printf("Enter Feet: ");
    scanf("%f",&D2.feet);
    printf("Enter inch: ");
    scanf("%f",&D2.inch);

    sum.feet = D1.feet + D2.feet;
    sum.inch = D1.inch + D2.inch;

    if(sum.inch>12) {
        sum.inch-=12;
        ++sum.feet;
    }

    printf("\nSum of distances: %0.f'-%0.1f",sum.feet,sum.inch);
    return 0;
}
