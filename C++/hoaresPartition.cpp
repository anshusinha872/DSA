#include<bits/stdc++.h>
using namespace std;
void hoaresPartition(vector<int> &vect){
    int low=0,high=vect.size()-1;
    int i=low-1;
    int j=high+1;
    int pivot = vect[low];
    while(true){
        do{
            i++;
        }while(vect[i]<pivot);
        do{
            j--;
        }while(vect[j]>pivot);
        if(i>=j) break;
        swap(vect[i],vect[j]);
    }
    cout<<"parition is done around index : "<<j<<endl;
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
    hoaresPartition(vect);
    for(int i=0;i<n;i++)
        cout<<vect[i]<<" ";
    return 0;
}