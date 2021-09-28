#include<iostream>
using namespace std;
bool getBit(int num,int pos)
{
    return ((num&(1<<pos))!=0);
}
void twoUnique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempXorSum=xorsum;
    int setBit=0;
    int pos=0;
    while(setBit!=1)
    {
        setBit = tempXorSum & 1;
        pos++;
        tempXorSum= tempXorSum>>1;
    }
    int newXorsum=0;
    for(int i=0;i<n;i++)
    {
        if(getBit(arr[i],pos-1))
        {
            newXorsum = newXorsum ^ arr[i];
        }
    }
    cout<<"the Two unique number are "<<newXorsum<<" "<<(newXorsum^xorsum)<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    twoUnique(arr,n);
    return 0;
}