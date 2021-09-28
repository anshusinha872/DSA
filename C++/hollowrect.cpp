#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the rows and column of the rect"<<'\n';
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
        {
            if(j==0||j==c-1||i==0||i==r-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";

    }
    return 0;   
}