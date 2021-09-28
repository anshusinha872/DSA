#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the number"<<endl;
    getline(cin,s);
    sort(s.begin(),s.end(),greater<int>());
    cout<<"largest possible number is "<<s<<endl;
    return 0;

}