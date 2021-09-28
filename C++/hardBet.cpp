#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3;
        cin>>s1>>s2>>s3;
        if(s3<s1&&s3<s2){
            cout<<"Alice"<<endl;
           continue;}
        if(s2<s1&&s2<s3){
            cout<<"Bob"<<endl;
            continue;}
        cout<<"Draw"<<endl;
    }
    return 0;
}