            #include<iostream>
            using namespace std;
            class Base{
                public:
                    void Hello(){
                        cout<<"demo function "<<endl;
                    }
                    virtual void showData(){
                        cout<<"base class function called ";
                        cout<<"Anshu Sinha"<<endl;
                    }
            };
            class derived : public Base{
                public:
                    void showData(){
                        cout<<"derived class function is called "<<endl;
                    }
            };
            int main(){
                Base obj1;
                derived obj2;
                Base *ptr=&obj2;
                ptr->showData();
                return 0;

            }