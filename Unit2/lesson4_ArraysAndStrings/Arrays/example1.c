#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[2][2],b[2][2],sum[2][2];
    int i,j,x,y,k,l;

    //entering elements of 1st matrix
    printf("Enter elements of 1st matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++) {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }

    //enter elements of 2nd matrix
    printf("Enter elements of 2nd matrix\n");
    for(x=0;x<2;x++){
        for(y=0;y<2;y++) {
            printf("Enter a%d%d: ",x+1,y+1);
            scanf("%f",&b[x][y]);
        }
    }
    printf("\n");

    //print sum of two matrices
    printf("sum of matrix:\n");
    for(k=0;k<2;k++) {
        for(l=0;l<2;l++) {
            sum[k][l] = a[k][l] + b[k][l];
            printf("%.1f\t",sum[k][l]);
        }
        printf("\n");
    }
    return 0;
}
