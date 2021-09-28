#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "   ";
        }
        for (int x = 1; x <= n; x++)
        {
            cout << " * ";
        }
        cout<<'\n';
    }
    return 0;
}