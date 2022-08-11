// Find Prime numbers between two integers

#include <stdio.h>
#include <stdlib.h>

void Find_Prime(int n1,int n2);

int main()
{
    int n1,n2;
    //int arr[50];
    printf("Enter two numbers(intervals): ");
    scanf("%d %d",&n1,&n2);
    printf("Prime numbers between %d and %d: ",n1,n2);
    Find_Prime(n1,n2);
    return 0;
}

void Find_Prime(int n1,int n2)
{
    int i,j;
    for(i=n1+1;i<n2;i++) {
        int counter=0;
        for(j=1;j<=n2;j++) {
            if(i%j==0) {
                counter++;
            }
        }
        if(counter==2) {
            printf("%d ",i);
        }
    }
}

