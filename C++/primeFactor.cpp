#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(num%2==0){
        cout<<2<<" ";
        num=num/2;
    }
    while(num%3==0){
        cout<<3<<" ";
        num=num/3;
    }
    for(int i=5;i*i<=num;i+=6){
        while(num%i==0){
            cout<<i<<" ";
            num=num/i;
        }
        while(num%(i+2)==0){
            cout<<(i+2)<<" ";
            num=num/(i+2);
        }
    }
    if(num>3)
        cout<<num<<" "<<endl;
    return 0;
}