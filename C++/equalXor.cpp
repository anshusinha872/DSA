#include<bits/stdc++.h>
using namespace std;
#define ll long long
void equalXor(ll arr[],ll n,ll x){
    
    ll count=0;
    ll repeat=0;
    ll max=arr[0];

    for(ll i=0;i<n;i++){
        max=max>arr[i]?max:arr[i];
    }
    ll checkArr[max+1];
    for(ll i=0;i<=max;i++){
        checkArr[i]=0;
    }
    for(ll i=0;i<n;i++){
        checkArr[arr[i]]++;
    }

    // cout<<"checkarr"<<endl;
    // for(ll i=0;i<=max;i++){
    //     cout<<checkArr[i]<<" ";
    // }
    // cout<<endl;
    for(ll i=0;i<n;i++){
        if((arr[i]^x)>max)
            continue;
        else if(checkArr[(arr[i]^x)]>=1){
            // cout<<"i :-"<<i<<" arr[i] "<<arr[i]<<endl;
            // cout<<"arr[i]^x : "<<(arr[i]^x)<<endl;
            checkArr[arr[i]]--;
            checkArr[(arr[i]^x)]++;
            arr[i]=(arr[i]^x);
            // cout<<"arr[i] "<<arr[i]<<endl;
            count++;
            // cout<<"count : "<<count<<endl;
            
        }
            
    }
    bool flag=0;
    repeat=checkArr[0];
    for(ll i=0;i<=max;i++){
        if(checkArr[i]>=2){
            // cout<<"checkArr["<<i<<"] : "<<checkArr[i]<<endl;
            repeat=repeat>checkArr[i]?repeat:checkArr[i];
            // cout<<"repeat "<<repeat<<endl;
        }
        else
            repeat=1;
            
    }
    cout<<repeat<<" "<<count<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        equalXor(arr,n,x);
    }
    return 0;
}