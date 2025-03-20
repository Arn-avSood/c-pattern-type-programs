#include<stdio.h>
int main()
{
    int n,j;
    printf("Enter no of elements you want to enter in array:");
    scanf("%d",&n);
    int arr[n],ar[n];
    for(int i=0;i<n;i++){
      printf("Enter element %d",i+1);
      scanf("%d",&arr[i]);
    }
    j=n;
    for(int i=0;i<n;i++){
        if (arr[i]==0){
        ar[j]=arr[i];
        j--;
        }
        else{
            ar[i]=arr[i];
        }
    }
     for(int i=0;i<n;i++){
      printf("%d",ar[i]);
     }
     return 0;
      
}