//Find area of a circle using macros

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define area(r) pi*r*r

int main()
{
    float radius,area;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area = area(radius);
    printf("Area=%0.2f",area);
    return 0;
}
