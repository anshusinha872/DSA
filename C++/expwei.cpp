#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int expwei(){
    string str;
    cin>>str;
    int sum1=0,sum2=0;
    for(int i=0;i<str.length();i++){
        sum1+=(str[i]-'0')*(i+1);
        cout<<sum1<<"\n";
    }
    return 0;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        cout<<expwei()<<"\n";
    }
    return 0;
}