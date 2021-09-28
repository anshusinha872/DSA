#include<bits/stdc++.h>
using namespace std;
int countElder(int arr[],int pos){
    sort(arr,arr+pos);
    int low=0,high=pos-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==0)
            low=mid+1;
        else{
            if(mid==0 || arr[mid-1]==0)
                return pos-mid;
            else
                high = mid-1;
        }
    }
    return 0;
}
int vaccine(){
   int n,p,x,y;
   cin>>n>>p>>x>>y;
   int arr[n];
   for(int i=0;i<n;i++)
        cin>>arr[i];
    int child =0,elder =0,total;
    // cout<<"Elder count ";
    elder = countElder(arr,p);
    // cout<<elder<<endl;
    child = p-elder;
    return (elder*y+child*x);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<vaccine()<<endl;
    }
    return 0;
}