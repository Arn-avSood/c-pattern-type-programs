#include<stdio.h>

    void arraymean(int n){
    float a[n] ,sum;
    float mean;
    for(int i=0;i<n;i++)
    {
      printf("Enter element %d:", i+1);
      scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

    }
    printf("%.2f\n",sum);
    mean=sum/n;
    printf("%.2f",mean);
}
int main()
{
    int n;
    printf("Enter number of elements you want to enter");
    scanf("%d", &n);
    arraymean(n);
    return 0;
}