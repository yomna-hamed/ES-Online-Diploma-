#include <stdio.h>
#include <stdlib.h>

//A caculator
int main()
{
    char x;
    float a,b,result;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&x);
    printf("Enter two operands: ");
    scanf("%f %f",&a,&b);
    if(x=='+') {
        result = a+b;
    }
    else if(x=='-') {
        result = a-b;
    }
    else if(x=='*') {
        result = a*b;
    }
    else if(x=='/') {
        result = a/b;
    }
    printf("%.1f %c %.1f = %.1f",a,x,b,result);
    return 0;
}
