#include<iostream>
using namespace std;
int NumberofOnes(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<"the number of ones is "<<NumberofOnes(n)<<endl;
    return 0;
}
