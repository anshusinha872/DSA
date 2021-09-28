#include<bits/stdc++.h>
using namespace std;
string airLine(int weight[],int d,int e){
    int carry_bag =0;
    // for(int i=0;i<3;i++)
    //     cout<<weight[i]<<" ";
    // cout<<endl;
    int sum=0;
    for(int i=0;i<3;i++){
        carry_bag=weight[i];
        // cout<<"Carry Bag : "<<carry_bag<<endl;
        for(int j=0;j<3;j++){
            if(i!=j){
                sum=sum+weight[j];
            }
        }
        // cout<<"sum : "<<sum<<endl;
        if(carry_bag<=e && sum<=d)
            return "YES";
        sum=0;
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int weight[3];
        for(int i=0;i<3;i++)
            cin>>weight[i];
        int d,e;
        cin>>d>>e;
        cout<<airLine(weight,d,e)<<endl;
    }
    return 0;
}