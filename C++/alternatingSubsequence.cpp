#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int subSeq(int arr[],ll n){
    ll sum=0;
    for(int i=0;i<n;i+=2){
        sum+=arr[i];
    }
    ll sum1=0;
    for(int i=1;i<n;i+=2){
        sum1+=arr[i];
    }
    return max(sum,sum1);
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<subSeq(arr,n)<<endl;
        
    }
    return 0;
}