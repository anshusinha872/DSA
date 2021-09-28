#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows ";
    int num=1,n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<num<<" ";
            num++;
        }
        num=1;
        cout<<'\n';
    }
    return 0;
}