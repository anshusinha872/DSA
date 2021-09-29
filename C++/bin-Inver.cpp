#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int minGCD(int arr[],int n,int even_number,int odd_number){
    ll count = INT_MAX;
    
    ll curr_count = 0;
    if(n==even_number)
    {
        for (int i = 0; i < n;i++){
            curr_count = 0;
            while(arr[i]!=1 && arr[i]>0){
                arr[i] = arr[i] / 2;
                curr_count++;
                cout << curr_count << " curre" << endl;
            }
            cout << endl;
            if(arr[i]==0)
                curr_count = 0;
            if(curr_count<count)
                count = curr_count;
            
        }
        return count;
    }
    return 0;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        ll even_number = 0, odd_number = 0;
        cin >> n;
        int arr[n];
        for (ll i = 0; i < n;i++){
            cin >> arr[i];
            if(arr[i]%2==0)
                even_number++;
            else
                odd_number++;
        }
        cout <<minGCD(arr, n,even_number,odd_number) << endl;
    }
    return 0;
}