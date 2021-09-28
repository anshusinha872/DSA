#include<bits/stdc++.h>
using namespace std;
string timeConversion(string s)
{
    string str = s.substr(s.length()-2);
    if(str.compare("PM")==0)
    {
        string time = s.substr(0,2);
        if(time.compare("12")==0)
        {
            return "12"+(s.substr(2,s.length()-4));
        }
        else
        {
            int hour = 12 + stoi(time);
            return (to_string(hour)+s.substr(2,s.length()-4));

        } 
    }
    else{
        string time = s.substr(0,2);
        if(time.compare("12")==0)
        {
            return "00"+(s.substr(2,s.length()-4));
        }
        else
        {
            return s.substr(0,s.length()-2);
        }
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<timeConversion(s)<<endl;
    return 0;
}