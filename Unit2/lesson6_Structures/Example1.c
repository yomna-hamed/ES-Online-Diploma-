//Store information of a student using structure

#include <stdio.h>
#include <stdlib.h>

struct Sstudent {
    char name[100];
    int roll;
    float marks;
} S1;

int main()
{
    printf("Enter information of students:\n");
    printf("Enter name: ");
    scanf("%s",S1.name);
    printf("Enter roll number: ");
    scanf("%d",&S1.roll);
    printf("Enter marks: ");
    scanf("%f",&S1.marks);
    printf("Displaying information:\n");
    printf("name: %s\nroll: %d\nmarks: %0.2f",S1.name,S1.roll,S1.marks);
    return 0;
}
