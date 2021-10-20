#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&vect){
    for(int i=0;i<vect.size()-1;i++){
        bool swapped = false;
        for(int j=0;j<vect.size()-1-i;j++){
            if(vect[j]>vect[j+1]){
                swap(vect[j],vect[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
}
int main(){
    int size;
    cin>>size;
    int input;
    vector<int> vect;
    for(int i=0;i<size;i++){
        cin>>input;
        vect.push_back(input);
    }
    bubbleSort(vect);
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
    return 0;
}