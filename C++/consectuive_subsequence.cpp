#include<bits/stdc++.h>
using namespace std;
int consective(int arr[],int n){
    unordered_set<int> s;
    int curr=1,res=0;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
            while(s.find(arr[i]+curr)!=s.end())
                curr++;
            res=max(res,curr);
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<consective(arr,n)<<"\n";
    return 0;
}