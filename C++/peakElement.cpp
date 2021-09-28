#include<iostream>
using namespace std;
int peakELement(int arr[],int low,int high,int n){
    while(low<=high){
        int mid = (low+high)/2;
        if((mid==0 || arr[mid-1]<=arr[mid])&& (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;
        if(mid>0 && arr[mid-1]>arr[mid])
                return peakELement(arr,low,mid-1,n);
            else
                return peakELement(arr,mid+1,high,n);
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peakELement(arr,0,n,n)<<endl;
    return 0;
}