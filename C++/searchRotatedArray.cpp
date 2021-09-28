#include<iostream>
using namespace std;
int searchRotatedArray(int arr[],int low,int high,int key){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[low]<arr[high]){
            if(key>=arr[low]&&key<=arr[mid]){
                return searchRotatedArray(arr,low,mid-1,key);
            }
            else
                return searchRotatedArray(arr,mid+1,high,key);
        }
        else{
            if(key>arr[mid+1]&&key<=arr[high])
                return searchRotatedArray(arr,mid+1,high,key);
            else
                return searchRotatedArray(arr,low,mid-1,key);
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
    cout<<searchRotatedArray(arr,0,n,key);
    return 0;
}