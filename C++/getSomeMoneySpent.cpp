#include<iostream>
using namespace std;
int getSomeMoneySpent(int b,int keyArr[],int n,int usbArr[],int m)
{
    int CurrMax=0,Max=0;
    bool check=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((keyArr[i]+usbArr[j])<=b)
            {
                CurrMax=keyArr[i]+usbArr[j];
                check= true;
                Max= max(CurrMax,Max);
            }
        }
    }
    if(check)
    {
        return Max;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    int keyArr[n];
    for(int i=0;i<n;i++)
        cin>>keyArr[i];
    int usbArr[m];
    for(int i=0;i<m;i++)
        cin>>usbArr[i];
    cout<<getSomeMoneySpent(b,keyArr,n,usbArr,m);
    return 0;
}