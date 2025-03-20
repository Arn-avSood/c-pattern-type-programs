#include<stdio.h>

    void arrayduplicate(int n){
    float a[n] ;
    for(int i=0;i<n;i++)
    {
      printf("Enter element %d:", i+1);
      scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
     for(int j=i+1;j<n;j++)
     {
        if (a[i]==a[j])
        {
            printf("duplicate element found:%.2f\n",a[j]);

        }  
     }
  }
}
int main()
{
    int n;
    printf("Enter number of elements you want to enter");
    scanf("%d", &n);
    arrayduplicate(n);
    return 0;
}