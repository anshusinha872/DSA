#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++)
            cin>>arr[i];
        int count_arr[11]={0};
        for(int i=0;i<4;i++)
        {
            count_arr[arr[i]]++;
        }
        int pair[5]={0};
        for(int i=1;i<=10;i++){
            // cout<<count_arr[i]<<" ";
            pair[count_arr[i]]++;
        }
        // cout<<endl;
        // for(int i=1;i<=4;i++){
        //     cout<<pair[i]<<" ";
        // }   
        if(pair[1]==4)
            cout<<"2"<<endl;
        else if(pair[1]==2 && pair[2]==1)
            cout<<"2"<<endl;
        else if(pair[1]==1 && pair[3]==1)
            cout<<"1"<<endl;
        else if(pair[2]==2)
            cout<<"2"<<endl;
        else
            cout<<"0"<<endl;
    } 
    return 0;
}