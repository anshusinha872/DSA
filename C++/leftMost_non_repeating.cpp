#include<bits/stdc++.h>
using namespace std;
int Left_most(string &str){
    bool CHAR[256]={false};
    int res=INT_MAX;
    for(int i=str.length()-1;i>=0;i--){
        if(CHAR[str[i]]==false)
        {
            res=min(res,i);
            CHAR[str[i]]=true;
        }
    }
    return ((res==INT_MAX)?-1:res);
}
int main(){
    string str;
    cin>>str;
    cout<<Left_most(str)<<"\n";
    return 0;
}