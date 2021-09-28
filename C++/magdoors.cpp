#include<bits/stdc++.h>
using namespace std;
int door(){
    string str;
    cin>>str;
    int count=0;
    int x=1;
    for(int i=0;i<str.length();){
        x=x%2;
        if((str[i]-48)!=x){
            for(int j=i;j<str.length();j++){
                if((str[j]-48)==x)
                    i=j;
            }
            count++;
            x++;
        }
        else
            i++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<door()<<endl;
    }
    return 0;
}