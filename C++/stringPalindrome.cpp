#include<bits/stdc++.h>
using namespace std;
string isPal(string str){
    int l=0,r=(str.length()-1);
    sort(str.begin(),str.end());
    cout<<str<<"\n";
    while(l<=r){
        if(str[r]==str[l]){
            r--;
            l++;
        }
        else
            return "Not a palindrome";
    }
    return "palindrome";
}
int main(){
    string str;
    cin>>str;
    cout<<isPal(str)<<"\n";
    return 0;
}