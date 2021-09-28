#include<iostream>
using namespace std;
class node{
    public: 
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};
//funtion to add node at the end
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}
//function to add node at the head
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next= head;
    head=n;
}
//function to delete a node
void deleteAtHead(node* &head);
void deleteNode(node* &head,int val){
    //if linked is empty
    if(head==NULL){
        return;
    }
    //if linked list contain only one node
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp= temp->next;
    }
    node* todelte = temp->next;
    temp->next = temp->next->next;
    delete todelte;
}
//function to delete at head node
void deleteAtHead(node* &head){
    node* temp = head;
    head=temp->next;
    delete temp;
}

//function to print the node
void printList(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    int n;
    here:
    cout<<"1 : To insert node at Tail "<<endl;
    cout<<"2 : To insert node at Head "<<endl;
    cout<<"3 : To delete Head node "<<endl;
    cout<<"4 : TO delate Node with Particular Value "<<endl;
    cout<<"5 : To print the link list "<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"Enter no. of nodes to the inserted at Tail : ";
            cin>>n;
            for(int i=0;i<n;i++){
                cout<<"Enter value : ";
                int temp;
                cin>>temp;
                insertAtTail(head,temp);
            }
        }
            break;
        case 2 :{
            cout<<"Enter no. of nodes to the inserted at Head : ";
            cin>>n;
            for(int i=0;i<n;i++){
                cout<<"Enter value : ";
                int temp;
                cin>>temp;
                insertAtHead(head,temp);
            }
        }
            break;
        case 3:{
            deleteAtHead(head);
        }
            break;
        case 4 :{
            cout<<"Enter value : ";
            cin>>n;
            deleteNode(head,n);
        }
            break;
        case 5:{
            printList(head);
        }
            break;
        default:
            cout<<"Enter correct choice "<<endl;
            break;
    }
    cout<<"Enter 1 to continue or 0 to end : "<<endl;
    int user;
    cin>>user;
    if(user){
        goto here;
    }else{
        cout<<"End "<<endl;
    }
    return 0;
}