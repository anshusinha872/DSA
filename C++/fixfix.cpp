#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fixfix(int n, int k)
{
    if (n - k == 1)
    {
        cout << "-1";
        return;
    }
    else if (n == k)
    {
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            return;
        }
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        cout<<n<<" ";
         for (int i = k + 1; i < n; i++)
            cout << i << " ";
        return;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        fixfix(n, k);
        cout << endl;
    }
    return 0;
}