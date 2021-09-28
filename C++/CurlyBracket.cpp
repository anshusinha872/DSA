#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j >= 1; j--)
        {
            cout << "*";
        }
        for (int x = 1; x <= 2 * i - 1; x++)
        {
            cout << " ";
        }
        for (int j = k; j >= 1; j--)
        {
            cout << "*";
        }
        k--;
        cout << '\n';
    }
    k = 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        for (int x = 1; x <= 2 * i - 1; x++)
        {
            cout << " ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        k++;
        cout << '\n';
    }
    return 0;
}
