//static variable in a function
#include<iostream>
using namespace std;
void fun(){
    //static varibale 
    static int var =0;
    cout<<var<<" ";
    var++;
}
class demo{
    public:
        //static data member
        static int var2;
        void getData(){
            cout<<"var2 : "<<var2<<endl;
        }
        //static member function
        static void printMSG(){
            cout<<"hello world"<<endl;
        }
};
int demo::var2;
int main(){
    for(int i=0;i<5;i++){
        //fun function is called 5 times
        fun();

    }
    cout<<endl;
    demo obj1;
    obj1.var2=50;
    obj1.getData();
    //static member function is ivoked using class name and scope resolution operator 
    demo::printMSG();
    return 0;
}