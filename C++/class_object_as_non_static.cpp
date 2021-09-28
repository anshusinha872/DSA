#include<iostream>
using namespace std;
class demo{
    public:
        demo(){
            cout<<"inside the constructor "<<endl;
        }
        ~demo(){
            cout<<"inside the destructor "<<endl;
        }
};
int main(){
    int x=0;
    if(x==0){
        demo obj;
    }
    cout<<"main function ends"<<endl;
    return 0;
}