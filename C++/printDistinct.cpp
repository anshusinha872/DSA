#include<bits/stdc++.h>
using namespace std;
void countDistinct(int arr[],int n,int key){
    unordered_map<int,int> m;
    for(int i=0;i<key;i++)
        m[arr[i]]++;
    cout<<m.size()<<" ";
    for(int i=1;i<=n-key;i++){
        m[arr[i-1]]--;
        if(m[arr[i-1]]==0)
            m.erase(arr[i-1]);
        m[arr[i+key-1]]++;
        cout<<m.size()<<" ";
    }
}
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    countDistinct(arr,n,key);
    return 0;
}