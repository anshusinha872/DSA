#include<bits/stdc++.h>
using namespace std;
//naive method 
// time complexity O(n^2) and space complexity O(n)
// void selectionSort(vector<int> &vect){
//     vector<int> temp;
//     for(int i=0;i<vect.size();i++){
//         int min_ind=0;
//         for(int j=1;j<vect.size();j++){
//             if(vect[j]<vect[min_ind])
//                 min_ind = j;
//         }
//         temp.push_back(vect[min_ind]);
//         vect[min_ind]=INT_MAX;
//     }
//     vect=temp;
// }



// in place algorithm time complexity  O(n^2) space complexity = O(1)
void selectionSort(vector<int>&vect){
    for(int i=0;i<vect.size();i++){
        int mid_ind=i;
        for(int j=i+1;j<vect.size();j++){
            if(vect[j]<vect[mid_ind]){
                mid_ind=j;
            }
        }
        swap(vect[i],vect[mid_ind]);
    }
}
int main(){
    int size;
    cin>>size;
    vector<int> vect;
    int input=0;
    for(int i=0;i<size;i++){
        cin>>input;
        vect.push_back(input);
    }
    selectionSort(vect);
    for(auto i = vect.begin();i<vect.end();i++)
        cout<<*i<<" ";
    return 0;
}