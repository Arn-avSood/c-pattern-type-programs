#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node*nextptr;
}*stnode;
void createnodelist(int n);

void displaylist();
int main()
{
    int n;
    printf("Enter numbers of nodes to be created:");
    scanf("%d", &n);
    createnodelist(n);
    displaylist();
    return 0;
}
void createnodelist(int n){
    struct node*fnode,*tmp;
     int num,i;
     stnode=(struct node*)malloc(sizeof(struct node));
     if (stnode ==  NULL){
     printf("memory cannot be allocated");
     }
     else{
        printf("input data for node 1:");
        scanf("%d", &num);
        stnode ->num=num;
        stnode->nextptr=NULL;
        tmp=stnode;
        for (i=2;i<=n;i++){
            fnode=(struct node*)malloc(sizeof(struct node));
            if(fnode == NULL){
                printf("memory could not be allocated");
                break;
            }
            else{
                printf("Input data for node %d :",i);
                scanf("%d", &num);
                fnode->num=num;
                fnode->nextptr=NULL;
                tmp->nextptr=fnode;
                tmp=tmp->nextptr;
            }
        }
     }

}
void displaylist()
{
    struct node*tmp;
    if(stnode == NULL){
        printf("List is empty");
    }
    else{
        tmp =stnode;
        while(tmp!=NULL){
            printf("data=%d\n",tmp->num);
            tmp=tmp->nextptr;
        }
    }
}