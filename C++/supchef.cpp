#include<bits/stdc++.h>
using namespace std;
string movie(){
    int m,n,k;
    cin>>m>>n>>k;
    int time =0;
    time = n*k;
    if(m>time)
        return "YES";
    else
        return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<movie()<<endl;
    }
    return 0;
}