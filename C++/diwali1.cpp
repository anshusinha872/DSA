#include<bits/stdc++.h>
using namespace std;
int diwali(){
   int p,a,b,c,x,y;
   cin>>p>>a>>b>>c>>x>>y;
   int anar = b+x*a;
   int chakri = c+y*a;
   int sum = min(anar,chakri);
   return p/sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<diwali()<<endl;
    }
    return 0;
}