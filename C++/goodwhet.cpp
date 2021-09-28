#include<iostream>
using namespace std;
string fun(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            count++;
        else
            count--;
    }
    if(count>0)
        return "Yes";
    else
        return "No";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=7;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<fun(arr,n)<<endl;
    }
    return 0;
}