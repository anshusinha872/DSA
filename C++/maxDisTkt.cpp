#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void maxDistinct(){
    ll n;
    cin>>n;
    int b[n];
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    int arr[10];
    for(int i=0;i<10;i++)
        arr[i]=0;
    for(ll i=0;i<n;i++){
        arr[(b[i]%10)]++;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            count++;
    }
    
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        maxDistinct();
        cout<<endl;
    }
    return 0;
}