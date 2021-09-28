#include<bits/stdc++.h>
using namespace std;
void minimumGroup(int arr[],int n){
    int var=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=var){
            cout<<"from "<<i<<" to ";
            for(int j=i;j<n;j++){
                if(arr[j]==var){
                    cout<<j-1<<endl;
                    i=j-1;
                    break;
                }
            }
            if(arr[n-1]!=arr[0])
                cout<<n-1<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    minimumGroup(arr,n);
    return 0;
}