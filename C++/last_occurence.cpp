#include<iostream>
using namespace std;
int last_occ(int arr[],int n,int low,int high,int key){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>key){
            return last_occ(arr,n,low,mid-1,key);
        }
        else if(arr[mid]<key){
            return last_occ(arr,n,mid+1,high,key);
        }
        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1])
                return mid;
            else
                return last_occ(arr,n,mid+1,high,key);
        }
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
    cout<<last_occ(arr,n,0,n-1,key);
    return 0;
}