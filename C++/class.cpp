#include<iostream>
using namespace std;
class student{
    private:
        string s_name;
        int *s_age;
        char s_gender;
        int mark;
    public:
        //default constructor
        student(){
            cout<<"default constructor called "<<endl;
            s_age = new int;
        }
        //parameterised constructor 
        student(string s,int a,char g,int j){
            cout<<"parameterised constructor"<<endl;
            s_name=s;
            s_age = new int;
            *s_age=a;
            s_gender=g;
            mark=j;
        }
        //copy constructor
        student(student &s1){
            cout<<"copy constructor"<<endl;
            s_name = s1.s_name;
            s_age = new int;
            *s_age  = *(s1.s_age);
            s_gender = s1.s_gender;
            mark=s1.mark;
        }
        //member function to set values 
        void SetInfo(string s,int age,char gender,int x)
        {
            s_name=s;
            *s_age=age;
            s_gender=gender;
            mark=x;
        }
        //member function to print value
        void printInfo()
        {
            cout<<"Name : "<<s_name<<endl;
            cout<<"age : "<<*s_age<<endl;
            cout<<"gender : "<<s_gender<<endl;
            cout<<"mark : "<<mark<<endl;
        }
        //member function to set name
        void set_name(string s){
            s_name=s;
        }
        //member function to set age
        void set_age(int a){
            *s_age = a;
        }
        //destructor
        ~student(){
            cout<<"destructor called" <<endl;
        }
        //operator overloading
        student operator+(student s){
            student temp;
            temp.mark = mark + s.mark;
            return temp;
        }
        //member function to print mark
        void markPrint(){
            cout<<mark<<endl;
        }
};
int main(){
    student s1("Anshu ",21,'M',100);
    student s2("Sonam ",18,'F',200);
    s1.printInfo();
    s2.printInfo();
    student s3;
    s3=s1+s2;
    s3.markPrint();
    return 0;
}
