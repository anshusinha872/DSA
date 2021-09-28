#include<iostream>
using namespace std;

int GetBit(int n,int pos)
{
    int mask = 1<<pos;
    return ((n&mask)!=0);
}
int SetBit(int n,int pos)
{
    int mask = 1<<pos;
    return (mask|n);
}
int ClearBit(int n,int pos)
{
    int mask = 1<<pos;
    return (n&(~mask));
}
int UpdateBit(int n,int pos,int value)
{
    int mask = ~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main()
{
    //To get bit at position 2 in the number 5
    cout<<GetBit(5,2)<<endl;
    //to set bit as 1 at the position 1
    cout<<SetBit(5,1)<<endl;
    //to clear bit or setting bit as 0 at the position 2
    cout<<ClearBit(5,2)<<endl;
    //to update the bit with the following value at the given position
    cout<<UpdateBit(5,1,1)<<endl;
    return 0;
}