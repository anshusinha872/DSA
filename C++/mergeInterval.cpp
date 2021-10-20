#include<bits/stdc++.h>
using namespace std;
int res=0;
vector<pair<int,int>> mergeInterval(vector<pair<int,int>> vect){
    sort(vect.begin(),vect.end());
    for(int i=0;i<vect.size();i++){
        if(vect[i].first<=vect[res].second){
            vect[res].first = min(vect[i].first,vect[res].first);
            vect[res].second = max(vect[i].second,vect[res].second);
        }
        else{
            res++;
            vect[res]=vect[i];
        }
    }
    return vect;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> vect;
    for(int i=0;i<n;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        vect.push_back(make_pair(temp1,temp2));
    }
    vector<pair<int,int>> vect3 =  mergeInterval(vect);
    for(int i=0;i<=res;i++){
        cout<<vect3[i].first<<" "<<vect3[i].second<<" "<<endl;
    }
    return 0;
}