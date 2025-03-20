#include<stdio.h>
int main(){
    int i,j,row1,col1,row2,col2;
    //entering of first matrix
    printf("enter the number of rows:");
    scanf("%d",&row1);
    printf("enter the number of coloumns:");
    scanf("%d",&col1);
    int a[row1][col1];
    for (i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("enter the elements:arr[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //entering of second matrix
    printf("enter the number of rows:");
    scanf("%d",&row2);
    printf("enter the number of coloumns:");
    scanf("%d",&col2);
    int b[row2][col2];
    for (i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            printf("enter the elements:arr[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int c[row1][col1];
    for (i=0;i<row1;i++){
        for(j=0;j<col1;j++){
        c[i][j]=a[i][j]+b[i][j];}
    }
    // sum of two matrix
    printf("printing the sum of 2 matrix:\n");
    for (i=0;i<row1;i++){
        for (j=0;j<col2;j++){
            printf(":%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
