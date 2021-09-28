#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"class A"<<endl;
        }
};
class B:public A{
    public:
        B(){
            cout<<"class B"<<endl;
        }
};
class C:public A{
    public:
        C(){
            cout<<"Class C"<<endl;
        }
};
class D:public B{
    public:
        D(){
            cout<<"class D"<<endl;
        }
};
class E:public B{
    public:
        E(){
            cout<<"class E"<<endl;
        }
};
class F:public C{
    public:
        F(){
            cout<<"class F"<<endl;
        }
};
class G:public C{
    public:
        G(){
            cout<<"class G"<<endl;
        }
};
int main(){
    D obj1;
    cout<<endl;
    E obj2;
    cout<<endl;
    F obj3;
    cout<<endl;
    G obj4;
    return 0;

}