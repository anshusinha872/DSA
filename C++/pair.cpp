#include<iostream>
using namespace std;
int main()
{
    //syntax
    pair<int,string> p(1,"Anshu");
    cout<<p.first<<" ";
    cout<<p.second<<endl;

    //another method to initialize a pair
    p = make_pair(121,"Hello ");
    cout<<p.first<<" "<<p.second<<endl;

    //another method to initialize a pair
    p = {100,"World"};
    cout<<p.first<<" "<<p.second<<endl;
}