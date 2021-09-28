#include<iostream>
using namespace std;
string removedup(string str)
{
    if(str.length()==0)
        return "";
    char ch = str[0];
    string ros = removedup(str.substr(1));
    if(ch == ros[0])
        return ros;
    else
        return (ch+ros);
}
int main()
{
    string s = "aaabbbeeecddd";
    cout<<removedup(s);
    return 0;
}