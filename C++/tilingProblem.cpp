#include<iostream>
using namespace std;
int titling(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return (titling(n-1)+titling(n-2));
}
int main()
{
    int n;
    cin>>n;
    cout<<titling(n);
    return 0;
}