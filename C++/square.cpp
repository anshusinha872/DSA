#include<bits/stdc++.h>
using namespace std;
int square(int a,int b)
{
    int count=0;
    long long sr = sqrt(a);
    for(;(sr*sr)<=b;sr++)
    {
        
        if(sr * sr >=a)
            count++;
    }
    return count;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<square(a,b)<<endl;
    }
    return 0;
}