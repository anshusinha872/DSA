#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the Array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the i th Index"<<endl;
    int index;
    cin>>index;
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    for(int i=0;i<=index;i++)
    {
        MAX=MAX>arr[i]?MAX:arr[i];
        MIN=MIN>arr[i]?arr[i]:MIN;
    }
    cout<<"Max: "<<MAX<<" Min: "<<MIN<<" till Index: "<<index<<endl;
    return 0;
}