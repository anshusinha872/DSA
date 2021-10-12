#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int vl;
    struct stack* nxt;
}st;
int isEmpty(st* stk){
    if(stk==NULL)
        return 1;
    return 0;
}
int isFull(st* stk){
    st* stk1=malloc(sizeof(st));
    if(stk1==NULL)
        return 1;
    return 0;
}
void push(st** stk,int val){
    st* stk1=malloc(sizeof(st));
    stk1->vl=val;
    stk1->nxt=*stk;
    *stk=stk1;
}
int pop(st** stk){
    int val=(*stk)->vl;
    st* stk1=*stk;
    *stk=(*stk)->nxt;
    free(stk1);
    return val;
}
void top(st* stk){
    printf("top element is %d",stk->vl);
}
void prnt(st* stk){
    while(stk!=NULL){
        printf("%3d",stk->vl);
        stk=stk->nxt;
    }
}
int main(){
    st* hd=NULL;
    push(&hd,1);
    push(&hd,2);
    push(&hd,3);
    push(&hd,4);
    prnt(hd);
    printf("\n");
    pop(&hd);
    pop(&hd);
    prnt(hd);
    printf("\nstack status: ");
    if(isEmpty(hd))
        printf("stack is empty");
    else if(isFull(hd))
        printf("stcak is empty");
    else
        printf("partial filled");
    printf("\ncurrent element in the satck : ");
    prnt(hd);
}