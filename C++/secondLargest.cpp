#include<iostream>
using namespace std;
int secondLargest(int arr[],int n){
    int largest=0,res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 ||arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return arr[res];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<secondLargest(arr,n);
    return 0;
}