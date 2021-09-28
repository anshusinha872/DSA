#include<iostream>
using namespace std;
int binary_search(int arr[],int l,int r,int key){
    
    if(r>=l){
        int mid_element = (l+r)/2;
        if(arr[mid_element]==key)
            return mid_element;
        if(arr[mid_element]>key){
            return binary_search(arr,l,mid_element-1,key);
        }
        return binary_search(arr,mid_element+1,r,key);
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    int check = binary_search(arr,0,n-1,key);
    if(check==-1)
        cout<<"element not found"<<endl;
    else
        cout<<check<<endl;
    return 0;
}