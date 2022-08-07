#include <stdio.h>
#include <stdlib.h>

//Transpose of a matrix;
int main()
{
    int rows,columns;
    int a[10][10];
    int b[10][10];
    int i,j;

    //Enter matrix elements
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&rows,&columns);
    for(i=0;i<rows;i++) {
        for(j=0;j<columns;j++) {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    //display the matrix
    printf("Entered matrix: \n");
    for(i=0;i<rows;i++) {
        for(j=0;j<columns;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //display the transpose of the matrix
    printf("Transpose of matrix: \n");
    for(i=0;i<columns;i++) {
        for(j=0;j<rows;j++) {
            b[i][j] = a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
