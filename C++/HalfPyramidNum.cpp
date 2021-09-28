#include<iostream>
using namespace std;
int main()
{
    int row,num=1;
    cout<<"Enter the row "<<'\n';
    cin>>row;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<num<<" ";
            num++;
        }
        cout<<'\n';
    }
    return 0;
}