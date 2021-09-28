#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
//function to print content stored in the linked list
void printList(node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n= n->next;
    }
    cout<<endl;
}
int main(){
    //creating three nodes
    node* head;
    node* second;
    node* third;
    //allocating memory for the nodes
    head= new node;
    second = new node;
    third = new node;
    //assigning data in the first node
    head->data =1 ;
    //link first node with second
    head->next = second;
    //assigning data in the second node
    second->data  = 2;
    //link second node with the third node
    second->next = third;
    //assigning data in the third node
    third->data = 3;
    //third node is not pointing to any memory address that's why we assign NULL in the next
    third->next= NULL;
    printList(head);
    return 0;
}