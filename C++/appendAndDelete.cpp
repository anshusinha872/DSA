#include<bits/stdc++.h>
using namespace std;
string appendAndDelete(string str1,string str2,int k){
    int x=0,y=0,operation_needed=0,min_operation=0;
    for(int i=0;i<min(str1.length(),str2.length());i++)
    {
        if(str1[i]==str2[i])
        {
            x++;
        }
        else{
            break;
        }    
    }
    y=str2.length()-x;
    operation_needed= str1.length()-x;
    min_operation= y+operation_needed;
    int diff = k-min_operation;
    if((str1.length()+str2.length())<k)
        return "Yes";
    if(min_operation<=k)
    {
        if(diff%2==0)
        return "Yes";
    }
    
    return "No";
}
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int k;
    cin>>k;
    cout<<appendAndDelete(str1,str2,k);
    return 0;
}