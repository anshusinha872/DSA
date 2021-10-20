#include<bits/stdc++.h>
using namespace std;
int mexProb(int arr[],int n,int k){
    vector<int> vect;
    for(int i=1;i<(1<<n);i++)
    {
        set<int> s;
        for (int i = 0; i <=n; i++)
            s.insert(i);
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                if(arr[j]<=n)
                    s.erase(arr[j]);
            }
        }
        vect.push_back(*(s.begin()));
    }
    sort(vect.begin(),vect.end());
    return vect[k];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if((n>=1 && n<=100000)&&(k>=1 && k<=(n*((n+1)/2)))){
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            cout<<mexProb(arr,n,k)<<endl;
        }
    }    
    return 0;
}