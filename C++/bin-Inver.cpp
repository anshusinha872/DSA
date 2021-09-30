#include <bits/stdc++.h>
using namespace std;
int OddGCD(int n)
{
    int odd = 0, even = 0, count = 0, arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
            odd++;
        else
            even++;
    }
    int min = INT_MAX;

    if (odd == 0)
    {
        for (int i = 0; i < n; i++)
        {

            while (1)
            {
                if (arr[i] == 0)
                {
                    count = 0;
                    break;
                }
                else if (arr[i] % 2 != 0)
                    break;
                else
                {
                    arr[i] = arr[i] / 2;
                    count++;
                }
            }
            if (min > count && count != 0)
                min = count;
            count = 0;
        }
    }
    if (min == INT_MAX)
        return 0;
    else
        return min;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << OddGCD(n) << endl;
    }
    return 0;
}