#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements you want to enter");
    scanf("%d", &n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
      printf("Enter element %d:", i);
      scanf("%d",&a[i]);
    }
    for(int j=1;j<=n;j++)
    {
        printf("elements in array are:%d \n", a[j]);
    }
    return 0;
}