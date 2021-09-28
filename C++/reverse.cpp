#include<iostream>
using namespace std;
void reverse(string s1)
{
    if(s1.length()==0)
        return;
    string ros= s1.substr(1);
    reverse(ros);
    cout<<s1[0];
}
int main()
{
    string s1 = "anshu";
    reverse(s1);
}