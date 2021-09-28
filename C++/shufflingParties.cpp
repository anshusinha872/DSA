#include<bits/stdc++.h>
using namespace std;
int shufflingParties(int arr[],int n){
    int even_count=0;
    int odd_count=0;
    if(n%2==0){
        even_count=odd_count=n/2;
    }
    else{
        odd_count=(n/2+1);
        even_count=n-odd_count;
    }
    int arr_even_count=0;
    int arr_odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            arr_even_count++;
        else
            arr_odd_count++;
    }
    return min(arr_even_count,odd_count)+min(arr_odd_count,even_count);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<shufflingParties(arr,n)<<endl;
    }
    return 0;
}