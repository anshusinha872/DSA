#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    int min = INT_MAX;//INT_MAX is the maximum possible number in c++ defined in climits library
    int max = INT_MIN;//INT_MIN is the minimum possible number in c++ defined in climits library
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        min = min > arr[i] ? arr[i] : min;
        max = max > arr[i] ? max : arr[i];
    }
    cout<<"min :- "<<min<<"Max "<<max<<'\n';

    return 0;
}