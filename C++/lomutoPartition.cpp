#include<bits/stdc++.h>
using namespace std;
void lomutoPartition(vector<int> &vect){
    int low=0,high= vect.size()-1;
    int i=low-1;
    int pivot = vect[high];
    for(int j=low;j<=high-1;j++){
        if(vect[j]<pivot){
            i++;
            swap(vect[i],vect[j]);
        }
    }
    swap(vect[i+1],vect[high]);
    cout<<"Partition is done around index : "<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    int input=0;
    vector<int> vect;
    for(int i=0;i<n;i++){
        cin>>input;
        vect.push_back(input);
    }
    lomutoPartition(vect);
    for(int i=0;i<n;i++)
        cout<<vect[i]<<" ";
    return 0;
}