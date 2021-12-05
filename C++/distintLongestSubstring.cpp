#include<iostream>
using namespace std;
int longestDistinct(string str){
    int CHAR=256;
    int arr[CHAR]={0};
    int count=0,curr=0;
    for(int i=0;i<str.length();i++){
        count=max(curr,count);
        if(arr[str[i]]==0){
            arr[str[i]]++;
            curr++;
        }
        else{
            curr==0;
        }
    }
    return count;
}
int main(){
    string str;
    getline(cin, str);
    cout<<"Entered string is "<<str<<"\n";
    cout<<longestDistinct(str)<<"\n";
    return 0;
}