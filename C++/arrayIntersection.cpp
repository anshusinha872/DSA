#include<bits/stdc++.h>
using namespace std;
int arrayIntersection(int arr1[],int arr2[],int n1,int n2){
    unordered_set<int> s;
    int freq=0;
    for(int i=0;i<n1;i++)
        s.insert(arr1[i]);
    for(int i=0;i<n2;i++){
        if(s.find(arr2[i])!=s.end()){
            freq++;
            s.erase(arr2[i]);
        }
    }
    return freq;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    cout<<arrayIntersection(arr1,arr2,n1,n2);
}