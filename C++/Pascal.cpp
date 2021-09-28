#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int var;
    cin>>var;
    for(int i=0;i<var;i++)
    {    for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
            // cout<<i<<","<<j<<" ";
        }
        cout<<'\n';
    }
    return 0;
}