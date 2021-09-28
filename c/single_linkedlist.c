#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
        printf("The linked list is empty:");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);
}
void print_node(struct node *head)
{
    if(head==NULL)
        printf("The linked lisst is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;
    head->link=current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;
    head->link->link=current;
    /*printf("Data in 1st linked list :- %d",head->data);
    printf("\nData in 2nd liked list :- %d",head->link->data);
    printf("\nData in 3rd liked list :- %d", head->link->link->data);*/
    printf("\nThe no. of node is:- ");
    count_of_nodes(head);
    printf("\n");
    print_node(head);
    return 0;
}