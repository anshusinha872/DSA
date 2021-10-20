#include<bits/stdc++.h>
using namespace std;
vector<int> mergeArray(vector<int>arr1,vector<int>arr2){
    vector<int>temp;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j]<arr1[i]){
            temp.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        temp.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        temp.push_back(arr2[j]);
        j++;
    }
    return temp;
}
int main(){
    int n1,n2;
    cout<<"Enter size of First sorted Array : ";
    cin>>n1;
    vector<int>arr1;
    int temp;
    cout<<"Enter the element of the Array : ";
    for(int i=0;i<n1;i++){
        cin>>temp;
        arr1.push_back(temp);
    }
    cout<<"Enter size of Second Array : ";
    cin>>n2;
    cout<<"Enter element of the array : ";
    vector<int>arr2;
    for(int i=0;i<n2;i++){
        cin>>temp;
        arr2.push_back(temp);
    }
    vector<int>vect;
    vect = mergeArray(arr1,arr2);
    cout<<"merged array is : ";
    for(int i:vect)
        cout<<i<<" ";
    return 0;
}