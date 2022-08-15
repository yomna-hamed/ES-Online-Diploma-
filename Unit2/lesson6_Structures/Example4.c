//Store information of students using structures and arrays

#include <stdio.h>
#include <stdlib.h>

struct Sstudent {
    char name[50];
    int roll;
    float marks;
} arr[10];

int main()
{
    int i;
    printf("Enter information of student:\n");
    for(i=0;i<10;i++) {
        printf("for roll number: ");
        scanf("%d",&arr[i].roll);
        printf("Enter name: ");
        scanf("%s",&arr[i].name);
        printf("Enter marks: ");
        scanf("%f",&arr[i].marks);
        printf("\n");
    }

    printf("Displaying information of students:\n");
    for(i=0;i<10;i++) {
        printf("Information for roll number: %d\n",arr[i].roll);
        printf("Name: %s\n",arr[i].name);
        printf("marks: %0.1f\n",arr[i].marks);

    }
    return 0;
}
