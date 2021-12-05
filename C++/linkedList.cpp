#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printNode(Node *head){
    Node *curr=head;
    while (curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void PrintNodeRecustion(Node *head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    PrintNodeRecustion(head->next);
}
int main(){
    Node *head=new Node(10);
    Node *temp = new Node(20);
    Node *temp1= new Node(30);
    Node *temp2= new Node(40);
    head->next=temp;
    temp->next=temp1;
    temp1->next=temp2;
    temp2->next=NULL;
    printNode(head);
    return 0;
}