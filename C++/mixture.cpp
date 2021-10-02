#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string mixture(ll a,ll b){
    if(a>0 && b>0)
        return "Solution";
    else if(b==0)
        return "Solid";
    return "Liquid";
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        cout << mixture(a, b) << endl;
    }
    return 0;
}