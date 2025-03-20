#include<stdio.h>
int main()
{
    float sum=0,b;
    int a[10]={1,45,20,4,12,6,7,8,10,10};
    for(int i=0; i<10; i++)
    {
     sum =sum+a[i];
    }
     b=sum/10;
    printf("%f",b);
return 0;
}
