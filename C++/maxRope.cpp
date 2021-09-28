#include<iostream>
using namespace std;
int maxRope(int n,int a,int b,int c){
    if(n==0)
        return 0;
    if(n<0)
        return -1;
        
    int res = max(maxRope(n-a,a,b,c),max(maxRope(n-b,a,b,c),maxRope(n-c,a,b,c)));
    if(res==-1)
        return -1;
    return res+1;
}
int main(){
    int n,a,b,c;
    // cin>>n>>a>>b>>c;
    n=5;
    a=2;
    b=5;
    c=1;
    cout<<maxRope(n,a,b,c);
    return 0;
}