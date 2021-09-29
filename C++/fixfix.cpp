#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fixfix(int n,int k){
    if(n-k==1){
        cout << "-1";
        return;
    }
    else if(n==1 && k==1){
        cout << "-1";
        return;
    }
    else{
        for (int i = 1; i <= k;i++){
            cout << i << " ";
        }
        for (int i = n; i >= k + 1;i--){
            cout << i << " ";
        }
        return;
    }

}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        fixfix(n, k);
        cout<<endl;
    }
    return 0;
}