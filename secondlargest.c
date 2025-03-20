#include<stdio.h>
int main()
{
    int a[10];
    for(int j=0;j<10;j++)
    {
        printf("enter elements:");
        scanf("%d", &a[j]);
    }
    int large=a[0];
    int large2=a[1];
    for(int i=2;i<11;i++)
    {
        if(a[i]>large)
        {
            large2=large;
            large=a[i];
        }
    }
    printf("%d \n",large);
    printf("%d",large2);
    return 0;
}