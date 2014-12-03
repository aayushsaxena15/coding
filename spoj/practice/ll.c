#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next;
}node;
int main()
{
    node *head=NULL;
    head=(node *)malloc(sizeof(node));
    
    head->n=4;
    head->next=NULL;
    printf("%d\n",head->n);
    return 0;
}

