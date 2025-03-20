#include<stdio.h>
int main(){
    int c[5][3];
    printf("Enter elements in array \n");
     for(int i=1;i<=5;i++){
        for(int j=1;j<=3;j++){
            printf("enter element (%d)(%d)",i,j);
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
    for(int j=1;j<=3;j++)
     printf("%d ",c[i][j]);
    printf("\n");
    }
    return 0;
}