#include<iostream>
using namespace std;
int main()
{
    int n,num,rem,quo,count=0,bin=0,temp=1;
    cin>>n;
    for(;n!=0;)
    {
        rem=n%2;
        n=n/2;
        bin=bin+rem*temp;
        temp=temp*10;
    }
    cout<<bin;
    return 0;
}