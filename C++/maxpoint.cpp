#include<bits/stdc++.h>
using namespace std;
void maxpoint(){
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    vector<pair<int,int>>ans={{a,x},{b,y},{c,z}};
    int total = 240;
    int point=0;
        for(int i=0;i<20;i++){
            if(total<0)
                break;
            point+=ans[0].first;
            total-=ans[0].second;
        }
        for(int i=0;i<20;i++){
            if(total<0)
                break;
            point+=ans[1].first;
            total-=ans[1].second;
        }
        for(int i=0;i<20;i++){
            if(total<0)
                break;
            point+=ans[2].first;
            total-=ans[2].second;
        }
    cout<<point<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        maxpoint();
    }
    return 0;
}