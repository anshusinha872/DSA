#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string cstock(){
    float a,b,c,s;
    cin>>s>>a>>b>>c;
    float final_price=s+(c*s)/100;
    // cout<<final_price<<endl;
    if(final_price<=b && final_price>=a)
        return "Yes";
    return "No";
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        cout<<cstock()<<"\n";
    }
    return 0;
}