#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int balanceBracket(string str){
    int open_brac=0,close_brac=0;
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        if(str[i]=='(')
            open_brac++;
        else
            close_brac++;
    }
    // cout<<"open_brac : "<<open_brac<<endl;
    // cout<<"close_brac: "<<close_brac<<endl;
    return 2*min(open_brac,close_brac);
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        string str;
        cin>>str;
        cout<<balanceBracket(str)<<endl;
    }
    return 0;
}