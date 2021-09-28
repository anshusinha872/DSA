#include<iostream>
using namespace std;
void bonAppetit(int bill[], int n,int k, int bcharged)
{
    int totalAmount=0;
    for(int i=0;i<n;i++)
    {
        if(i!=k)
        {
            totalAmount+=bill[i];
        }
    }
    totalAmount=totalAmount/2;
    if(totalAmount==bcharged)
        cout<<"Bon Appetit";
    else{
        int refund=bcharged-totalAmount;
        cout<<refund;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int bill[n];
    for(int i=0;i<n;i++)
        cin>> bill[i];
    int bcharged;
    cin>>bcharged;
    bonAppetit(bill,n,k,bcharged);
    return 0;
}