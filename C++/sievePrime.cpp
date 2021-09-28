#include<bits/stdc++.h>
using namespace std;
void sievePrime(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=i;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sievePrime(n);
    return 0;
}