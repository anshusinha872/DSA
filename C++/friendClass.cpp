#include<iostream>
using namespace std;
class A{
        int a;
    public:
        A(){
            a=10;
        }
        //friend class
        friend class B;
};
class B{
    int b;
    public:
        B(){
            b=30;
        }
        //since B is friend of Class A it can access private data of class A
        void showData(A x){
            cout<<"A::a "<<x.a<<endl;
        }
};
int main(){
    A obj1;
    B obj2;
    obj2.showData(obj1);
    return 0;
    
}
