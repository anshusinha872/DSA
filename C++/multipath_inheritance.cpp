#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"class A"<<endl;
        }
        int a;
};
class B:public A{
    public:
        B(){
            cout<<"class B"<<endl;
        }
        int b;
};
class C:public A{
    public:
        C(){
            cout<<"class c"<<endl;
        }
        int c;
};
class D:public B,public C{
    public:
        D(){
            cout<<"class D"<<endl;
        }
        int d;
};
int main(){
    D obj;
    obj.B::a=10;
    return 0;
}