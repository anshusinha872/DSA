#include<iostream>
using namespace std;
//function with same name and return type and int as parameter
void fun(int x ){
    cout<<"the value of x is "<<x<<endl;
}
//function with same name and return type but char as parameter
void fun(char ch){
    cout<<"the ascii value of "<<ch<<" is "<<(int)ch<<endl;
}
//function with same name and return type but string as parameter
void fun(string str){
    cout<<"The input string is "<<str<<endl;
}
//function with same name and return type but two int as parameter
void fun(int x,int y){
    cout<<"sum is "<<x+y<<endl;
}

int main()
{
    //same function is behaving in different way for different arguments
    //function overloading
    fun('A');
    fun(10);
    fun(10,20);
    fun("Hello World!");
    return 0;
}