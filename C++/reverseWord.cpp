#include<iostream>
using namespace std;
void reverse(string &str1,int low,int high){
    while(low<=high){
        swap(str1[high],str1[low]);
        high--;
        low++;
    }
}
string reverseWord(string &str){
    int n= str.length();
    // cout<<n<<endl;
    int start=0;
    for(int end=0;end<n;end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
    return str;
}
int main(){
    string str;
    getline(cin,str);
    cout<<reverseWord(str)<<"\n";
    return 0;
}