#include<bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int>vect,int k)
{
    int energy=100;
    for(int i=0;true;)
    {
        if(vect[i]==1)
            energy-=3;
        if(vect[i]==0)
            energy-=1;
        i=((i+k)%vect.size());
        if(i==0)
        {
            break;
        }
    }
    return energy;
    
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>vect;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vect.push_back(temp);
    }
    cout<<jumpingOnClouds(vect,k);
    return 0;
}