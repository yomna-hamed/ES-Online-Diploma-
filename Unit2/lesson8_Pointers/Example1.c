//Demonstrate how pointers work

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,*ab;
    m = 29;
    printf("Address of m : 0x%x\n",&m);
    printf("value of m : %d\n\n",m);
    ab = &m;
    printf("Address of pointer ab : 0x%x\n",ab);
    printf("content of pointer ab : %d\n\n",*ab);
    m = 34;
    printf("Address of pointer ab : 0x%x\n",ab);
    printf("content of pointer ab : %d\n\n",*ab);
    *ab = 7;
    printf("Address of m : 0x%x\n",&m);
    printf("value of m : %d\n",m);
    return 0;
}
