#include<iostream>
using namespace std;
int rainWater(int arr[],int n){
    int ans=0;
    for(int i=1;i<n-1;i++){
        int left_max=arr[i];
        for(int j=0;j<i;j++){
            left_max=max(left_max,arr[j]);
        }
        int right_max=arr[i];
        for(int j=i+1;j<n;j++){
            right_max=max(right_max,arr[j]);
        }
        ans+=min(left_max,right_max)-arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<rainWater(arr,n)<<endl;
    return 0;
}