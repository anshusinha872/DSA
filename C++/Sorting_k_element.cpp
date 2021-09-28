#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n]; //creating a 2d array
    int index;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j]; //storing the value
        }
    }
    cin >> index; //promoting user to enter the element index
    int *ptr = &arr[0][0];
    int *ptr2 = &arr[n - 1][n - 1];
    int k = 1;
    int x = 1;
    for (ptr = &arr[0][0]; ptr < &arr[n][n]; ptr++)
    {
        for (int *ptr1 = &arr[0][0]; ptr1 <= ptr2 - k; ptr1++)
        {
            if (*(ptr1) < *(ptr1 + 1))
            {
            }
            else
            {
                int temp;
                temp = *ptr1;
                *ptr1 = *(ptr1 + 1);
                *(ptr1 + 1) = temp;
            }
        }
        k++;
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for (ptr = &arr[0][0]; ptr < &(arr[n][n]); ptr++)
    {
        if (x == index)
        {
            cout << *(ptr) << endl;
            break;
        }
        x++;
    }
    return 0;
}