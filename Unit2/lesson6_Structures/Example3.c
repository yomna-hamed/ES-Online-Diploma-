//Add two complex numbers using structers

#include <stdio.h>
#include <stdlib.h>

struct Scomplex Add(struct Scomplex first,struct Scomplex second);

struct Scomplex {
    float real;
    float img;
} first,second,sum ;

int main()
{
    //first complex number
    printf("for 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f",&first.real,&first.img);

    //second complex number
    printf("\nfor 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f",&second.real,&second.img);

    sum = Add(first,second);
    printf("sum = %0.1f+%0.1fi",sum.real,sum.img);
    return 0;
}

struct Scomplex Add(struct Scomplex first,struct Scomplex second) {
    struct Scomplex sum;
    sum.real = first.real + second.real;
    sum.img = first.img + second.img;
    return sum;
}
