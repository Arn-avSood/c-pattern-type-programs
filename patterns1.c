#include<stdio.h>
int main()
{
    int n;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i ;j++)
        {
            n=i+j;
            if (n%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}