#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int threeBox(ll a,ll b,ll c,ll d){
    if((a+b+c)<=d)
        return 1;
    if(a+b<=d && c<=d)
        return 2;
    if(a+c<=d && b<=d)
        return 2;
    return 3;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b, c,d;
        cin >> a >> b >> c >> d;
        cout << threeBox(a, b, c, d) << endl;
    }
    return 0;
}