#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"class A"<<endl;
        }
        ~A(){
            cout<<"class A destructor "<<endl;
        }
};
class B{
    public:
        B(){
            cout<<"class B"<<endl;
        }
        ~B(){
            cout<<"class B destructor"<<endl;
        }
};
class C:public A,public B{
    public:
        C(){
            cout<<"class C"<<endl;
        }
        ~C(){
            cout<<"class C destructor"<<endl;
        }
};
class D:public A{
    public:
        D(){
            cout<<"class D"<<endl;
        }
        ~D(){
            cout<<"class D destructor" <<endl;
        }
};
class E:public D{
    public:
        E(){
            cout<<"class E"<<endl;
        }
        ~E(){
            cout<<"class E destructor"<<endl;
        }
};
class F:public D{
    public:
        F(){
            cout<<"class F"<<endl;
        }
        ~F(){
            cout<<"class F destructor"<<endl;
        }
};
int main(){
    E obj;
    cout<<endl;
    // F obj2;
    // cout<<endl;
    // C obj3;
    // cout<<endl;
    return 0;
}