#include<iostream>
using namespace std;
int oddRepeat(int n,int k,int s){
    int sum=(n)*(n);
    int x = sum-((n-1)*(n-1));
    for(int i=1;i<=x;i+=2){
        if(sum+((k-1)*i)==s)
            return i;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,s;
        cin>>n>>k>>s;
        cout<<oddRepeat(n,k,s)<<endl;
    }
    return 0;
}