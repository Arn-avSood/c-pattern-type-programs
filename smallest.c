#include<stdio.h>
int main()
{
    int a[10]={112,23,45,54,67,12,66,78,3,9};
    int small1=a[1],small=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]<small1){
        small1=a[i];
        small=i;
        }
    }
    printf("%d",small);
    return 0;
}          