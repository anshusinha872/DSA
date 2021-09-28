#include <iostream>
using namespace std;
int BinarySearch(int arr[], int key, int n)
{
    int l = 0;
    int h = n;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        // int m=(l+h)/2;
        if (arr[m] == key)
        {
            return m;
        }
        else if (arr[m] > key)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key" << endl;
    int num;
    cin >> num;
    cout << BinarySearch(arr, num, n);
    return 0;
}