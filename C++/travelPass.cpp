#include<bits/stdc++.h>
using namespace std;
int travelPass(int n,int a,int b,string str){
    int time=0;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='0'){
            time=time+a;
        }
        else if(ch=='1'){
            time = time+b;
        }
    }
    return time;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string str;
        cin>>str;
        cout<<travelPass(n,a,b,str)<<endl;
    }
    return 0;
}