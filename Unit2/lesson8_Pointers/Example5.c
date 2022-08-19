//how to use a pointer to an array which contents are pointers to structure

#include <stdio.h>
#include <stdlib.h>

struct Semployee {
    char name[100];
    int ID;
};
int main()
{
    int i;
    struct Semployee e1 = {"Alex",1002},e2 = {"Yomna",1003},e3 = {"Hager",1004},e4 = {"sara",1005},e5 = {"salma",1006};
    struct Semplyee* arr[5] = {&e1,&e2,&e3,&e4,&e5};
    struct Semployee *(*p)[5];
    p = arr;

    for(i=0;i<6;i++) {
        printf("employee%d name: %s\n",i+1,(**(*p+i)).name);
        printf("employee%d ID: %d\n\n",i+1,(*(*p+i))->ID);
    }

    return 0;
}
