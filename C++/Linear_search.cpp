#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    int num;
    cin >> num;
    for(int i=0;i>n;i++)
    {
        if(arr[i]==num)
            cout<<"The Key is found at index NO. :- i"<<endl;
        else
            cout<<"Key not found"<<endl;
    }
    return 0;
}