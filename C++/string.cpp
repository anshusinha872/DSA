#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "Hello ";
    string str2 = "World";
    //append function 
    //this will append str2 into str1
    str1 = str1.append(str2);
    cout<<str1<<endl;
    str1= "hello ";
    str2="world";
    //this will append 2 character starting from 0th index of str2 into the str1 string
    str1=str1.append(str2,0,2);
    cout<<str1<<endl;
    str1= "hello ";
    str2="world";
    //this will append "Anshu" string into the str1
    str1=str1.append("Anshu");
    cout<<str1<<endl;
    str1= "hello ";
    //this will append 2 character starting from index 0 of the "Anshu" into str1
    str1=str1.append("Anshu",2);
    //this will append 2 character starting from index 2 of the "Anshu" into str1
    str1="hello ";
    str1=str1.append("Anshu",2,2);
    cout<<str1<<endl;
    str1 = "hello";
    //this will append 10 occurence of $ character into the str1
    str1=str1.append(10,'$');
    cout<<str1<<endl;
    str1= "hello ";
    str2= "world";
    //this will append str2 from index 2 upto last into the str1 string
    str1= str1.append(str2.begin()+2,str2.end());
    cout<<str1<<endl;
    str1= "helloworld";
    str2 = "helloworld";
    //comparing str1 and str2
    cout<<str1.compare(str2)<<endl;
    //compare function return a value
    //value > 0 if the str1 is greater than str2
    //value < 0 if the str1 is smaller than str2
    //value = 0 if the str1 equal to str2

    //compare 2 character starting from index 0 of str2 with the str1
    cout<<str1.compare(0,2,str2)<<endl;


    //compare 3 character starting from index 0 of str1 with the 2 character starting with index 1 of ths str2
    cout<<str1.compare(0,3,str2,1,2)<<endl;
    cout<<"Before erasing " <<str1<<endl;
    //this function will delete all character
    str1.erase();
    cout<<"After erasing"<<str1<<endl;
    str1="HelloWorld";
    cout<<"before "<<str1<<endl;
    //this will delete all character expect the first character
    str1.erase(1);
    cout<<"after "<<str1<<endl;
    str1="HelloWorld";
    cout<<"before "<<str1<<endl;
    //this will delete three character starting from index 1 
    str1.erase(1,3);
    cout<<"after "<<str1<<endl;
    str1="HelloWorld";
    cout<<"before "<<str1<<endl;
    //this will delete character at the index 4
    str1.erase(str1.begin()+4);
    cout<<"After "<<str1<<endl;
    str1="HelloWorld";
    cout<<"before "<<str1<<endl;
    str1.erase(str1.begin()+0,str1.end()-3);
    cout<<"after "<<str1<<endl;
    //find() function 
    //this function return the first occurence on the required sub-string
    str1= "helloworld";
    cout<<str1.find("wor")<<endl;

    //insert() function 
    //this function is used to insert any sub-string into any string
    str1="hello World";
    //this will insert "anshu" at the index 2 of the str1 string
    str1.insert(2,"anshu");

    cout<<"after inserting the string :- "<<str1<<endl;
    str1="Helloworld";
    str2="anshusinha";
    str1.insert(6,str2,1,4);
    cout<<str1<<endl;
    return 0;
}