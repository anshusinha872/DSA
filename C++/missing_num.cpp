#include<bits/stdc++.h>
using namespace std;
int MissingNum(int arr[],int n){
    int var=0;
    for(int i=0;i<n;i++){
        var=var^arr[i];
    }
    for(int i=0;i<=n+1;i++){
        var=var^i;
    }
    return var;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<MissingNum(arr,size);
    return 0;
}