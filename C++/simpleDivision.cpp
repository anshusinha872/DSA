#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int SimpDiv(int arr[],ll n,ll x,ll y){
    ll count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=x && arr[i]%y==0)
            count++;
    }
    return count;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<SimpDiv(arr,n,x,y)<<endl;
    }
    return 0;
}
