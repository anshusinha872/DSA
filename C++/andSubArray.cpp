#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int andSubArr(ll n){
    ll var = n;
    int bits = 0;
    while(n){
        n /= 2;
        bits++;
    }
    // cout << "bits : " << bits << endl;
    int curr_count = 0, pre_count = 0;
    curr_count = (var - (1 << bits-1))+1;
    pre_count = ((1 << bits-1) - (1 << (bits - 2)));
    // cout << "curr_count : " << curr_count << endl;
    // cout << "pre_count : " << pre_count << endl;
    if(curr_count==pre_count)
        return curr_count;
    return curr_count > pre_count ? curr_count : pre_count;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << andSubArr(n) << endl;
    }
    return 0;
}