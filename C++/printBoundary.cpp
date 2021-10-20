#include<iostream>
#include<vector>
using namespace std;
void Boundary(vector<vector<int>>vect){
    for(int i=0;i<vect[0].size();i++){
        cout<<vect[0][i]<<" ";
    }
    cout<<"\n";
    for(int i=1;i<vect.size();i++){
        cout<<vect[i][vect[i].size()-1]<<" ";
    }
    cout<<"\n";
    
}
int main(){
    int x,y;
    cin>>x>>y;
    vector<vector<int>>vect;
    for(int i=0;i<x;i++){
        vector<int> v;
        for(int j=0;j<y;j++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        vect.push_back(v);
    }
    Boundary(vect);
    return 0;
}