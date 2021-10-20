#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&vect){
    for(int i=1;i<vect.size();i++){
        int j=i-1;
        int key = vect[i];
        while(j>=0 && vect[j]>key){
            vect[j+1]=vect[j];
            j--;
        }
        vect[j+1]=key;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>vect;
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        vect.push_back(input);
    }
    insertionSort(vect);
    for(int i:vect)
        cout<<i<<" ";
    return 0;
}