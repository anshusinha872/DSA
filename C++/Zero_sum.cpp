#include<bits/stdc++.h>
using namespace std;
int subArray(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=(arr[i]==0)?-1:1;
    }
    unordered_map<int,int> s;
    int sum=0, maxLen=0;
    int prefix_sum=0;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        if(prefix_sum==0)
        {
            maxLen=max(maxLen,i+1);
        }
        if(s.find(prefix_sum)==s.end())
            s.insert({prefix_sum,i});
        if(s.find(prefix_sum)!=s.end()){
            maxLen=max(maxLen,i-s[prefix_sum]);
        }
        
        
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<subArray(arr,n);
    return 0;
}