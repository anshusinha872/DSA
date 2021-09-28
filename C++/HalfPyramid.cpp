#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the rows of the pyramid" << '\n';
    int row,col;
    cin >> row;
    col=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j<=row-i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}
