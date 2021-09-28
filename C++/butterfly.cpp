#include<iostream>
using namespace std;
int main()
{
    int row,n;
    cout<<"Enter the number of row ";
    cin>>row;
    n=2*row;
    for(int r=1;r<=row;r++)
    {
        for(int j=1;j<=n;j++)
        {
            if((j>r)&&(n-j>=r))
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<'\n';
    }
    for(int r=row;r>=1;r--)
    {
        for(int j=1;j<=n;j++)
        {
            if ((j > r) && (n - j >= r))
                cout << " ";
            else
                cout << "*";
        }
        cout<<'\n';
    }
    return 0;
}