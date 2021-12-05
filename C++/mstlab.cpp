#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Name : Anshu Abhishek "<<endl;
    cout<<"UID : 20BCS7034"<<endl;
    cout<<"Enter size : ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter element "<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"Enter key : ";
    int key;
    cin>>key;
    bool flag = false;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Element found at index : "<<i<<endl;
            flag=true;
        }
    }
    if(!flag)
        cout<<"Element not found "<<endl;
    return 0;
}