#include<bits/stdc++.h>
using namespace std;
string noDrugs(int n,int k,int l,int arr[]){
    int maxSpeed = INT_MIN;
    for(int i=0;i<n;i++)
        maxSpeed=maxSpeed>arr[i]?maxSpeed:arr[i];
    if(maxSpeed!=arr[n-1]){
        int diff = abs(maxSpeed-arr[n-1]);
        for(int i=1;i<l;i++){
            if(k>0){
                arr[n-1]=arr[n-1]+k;
                if(arr[n-1]>maxSpeed)
                    return "Yes";
            }
        }
        return "No";
    }
    else
        return "Yes";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<noDrugs(n,k,l,arr)<<endl;
    }
    return 0;
}