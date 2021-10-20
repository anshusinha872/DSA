#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&vect,int low,int high){
    int pivot = vect[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(vect[j]<pivot){
            i++;
            swap(vect[i],vect[j]);
        }
    }
    swap(vect[i+1],vect[high]);
    return i+1;
}
void quickSort(vector<int> &vect,int low,int high){
    if(low<high){
        int p = partition(vect,low,high);
        quickSort(vect,low,p-1);
        quickSort(vect,p+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    int input;
    vector<int>vect;
    for(int i=0;i<n;i++){
        cin>>input;
        vect.push_back(input);
    }
    quickSort(vect,0,n-1);
    cout<<"sorted Array is : ";
    for(int i:vect)
        cout<<i<<" ";
    return 0;
}