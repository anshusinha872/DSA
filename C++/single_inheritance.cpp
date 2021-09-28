#include<iostream>
using namespace std;
class base{
    public:
        //base class paramterized constructor
        base(int i){
            cout<<"this is base class paramterized constructor"<<endl;
        }
        //base clas default constructor
        base(){
            cout<<"this is a base class constructor "<<endl;
        }
        //base class member function
        void funcA(){
            cout<<"this is base class function "<<endl;
        }
};
class derived:public base{
    public:
        //derived class paramterized constructor and emplicitly mentioned base class paramterized constructor
        derived(int x):base(x){
            cout<<"this is derived class paramterized constructor"<<endl;
        }
        //derived class default constructor
        derived(){
            cout<<"this is derived class constructor "<<endl;
        }
        //derived class data member
        void funcB(){
            cout<<"this is derived class function"<<endl;
        }
};
int main(){
    //creating paramterized object of derived class
    derived obj(10);
    //creating default object of derived class
    derived obj2;
    //calling member function of the base class
    obj2.funcA();
    //calling member function of derived class
    obj2.funcB();
    return 0;
}