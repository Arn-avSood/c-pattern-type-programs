#include<stdio.h>
#include<stdlib.h>
struct node{
    int num;
    struct node*nextptr;
}*stnode ;
void createnodelist(int n);
void display();
int main{
    int n;
    printf("Enter how many nodes you want to create")
    scanf("%d", &n)
    createnodelist(n);
    display();
    return 0;
}
void cratenodelist(int n){
    struct node*head,*tail
}