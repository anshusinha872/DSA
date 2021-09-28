#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows ";
    int n,row,col;
    cin>>n;
    row=n;
    col=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                cout<<" 1 ";
            else if((i+j)%2==1)
                cout<<" 0 ";
            else
                cout<<"   ";
        }
        cout<<"\n";
    }
    return 0;

}