#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        int j;
        for (j = 1; j <= num - i; j++)
        {
            cout << "   ";
        }
        int k = j;
        for (; k <= num - 1;)
        {
            cout<<" " << k++<<" ";
        }
        cout<<" 0 ";
        k=num-1;
        int x=1;
        for(;x<i;x++)
        {
            cout<<" "<<k--<<" ";
        }
        cout << '\n';
    }
    return 0;
}