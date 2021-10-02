#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll MexOr(ll x){
    ll i = 0;
    while((i|(i+1))<=x){
            // cout << "(i|(i+1)) : "<<(i | (i + 1)) << endl;
            i = i | (i + 1);
    }
    return i+1;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        cout << MexOr(x) << endl;
    }
    return 0;
}