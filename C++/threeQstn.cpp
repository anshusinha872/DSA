#include<bits/stdc++.h>
using namespace std;
string threeQstn(int qstn[],int ans[]){
    int pos =0;
    int neg=0;
    for(int i=0;i<3;i++)
        if(qstn[i]==1)
            pos++;
    for(int i=0;i<3;i++)
        if(ans[i]==1)
            neg++;
    if(pos==neg)
        return "Pass";
    else
        return "Fail";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int qstn[3];
        for(int i=0;i<3;i++)
            cin>>qstn[i];
        int ans[3];
        for(int i=0;i<3;i++)
            cin>>ans[i];
        cout<<threeQstn(qstn,ans)<<endl;
    }
    return 0;
}