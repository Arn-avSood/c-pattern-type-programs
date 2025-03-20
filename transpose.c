#include<stdio.h>
int main(){
    int c[3][3];
    printf("Enter elements in array \n");
     for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("enter element (%d)(%d)",i,j);
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){      
        printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){      
        printf("%d ",c[j][i]);
    }
    printf("\n");
    }
    return 0;
}