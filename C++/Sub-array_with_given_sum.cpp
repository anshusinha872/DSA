#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int num;
    cin >> num;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == num)
            {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
        sum = 0;
    }
    return 0;
}