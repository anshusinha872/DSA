#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector function
    vector<int>vect{1,2,3,4,5,6,7,8,9,10};
    //  1.begin()
        //return the itertor pointing to the first element of the vector
    auto it = vect.begin();
    cout<<"begin() "<<*it<<endl;
    //  2.end()
        //return the itertor poitinh to the last element of the vector
    it = vect.end()-1;
    cout<<"end() "<<*it<<endl;
    //  3.rbegin()
        //return the itertor poiting to the last element of the vector(reverse beginning)
    auto ptr = vect.rbegin();
    cout<<"rbegin() "<<*ptr<<endl;
    // 4.rend()
        //return the itertor pointing to the first element of the vector(reverse end)
    ptr = vect.rend()-1;
    cout<<"rend() "<<*ptr<<endl;


    //capacity function

    //1.size()
        //return the number of element in the vector
    int size = vect.size();
    cout<<"size() "<<size<<endl;
    //2 max_size()
        //return the maximum number of element that vector can hold
    cout<<"maxsize() "<<vect.max_size()<<endl;

    //3 capacity()
        //return the size of storage space currently allocated to the vector
    cout<<"capacity() "<<vect.capacity()<<endl;
    //4 resize(n)
        //resize the vector so that it can hold the n element
    cout<<"current size of the vector "<<vect.size()<<endl;
    vect.resize(20);
    cout<<"size of vector after resizing it "<<vect.size()<<endl;
    // 5 empty()
        //return whether the vector is emplty or not 
        //it return false(1) when vector is not empty and return true(1) when vector is empty
    cout<<"empty() "<<vect.empty()<<endl;


    //element access
    //1. referenceopertor[g]
        //return a reference to the element at the position g in the vector
    cout<<"referenceopertor[g] "<<vect[1]<<endl;
    //2 at(g)
        //return a  reference to the element at the position g in the vector
    cout<<"at(1) "<<vect.at(1)<<endl;
    //3 front()
        //return a reference to the first element of the vector
    cout<<"front() "<<vect.front()<<endl;
    //4 back()
        //return a reference to the last element of the vector
    vect.resize(10);
    cout<<"back() "<<vect.back()<<endl;
    

    //modifier
    

    //1.assign()
        //it assign new value to the vector element by replacing the old one
    vect.assign(5,111);
    cout<<"vector after assining "<<endl;
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
    cout<<endl;

        //it also help in modify the element
    vect.assign(vect.begin(),vect.begin()+2);
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
    cout<<endl;

    // 2 push_back()
        //it push the element into the vector from the back
    vect.push_back(1);
    cout<<"push_back() "<<vect.back()<<endl;
    //3 pop_back()
        //it is used to remove or pop the element from a vector from the back
    vect.pop_back();//this function call will remove 1 from the vector so 111 will become the last element
    cout<<"pop_back() "<<vect.back()<<endl;
    // insert()
        //it insert new element before the element at the specified position
        //1st paramter is position :- it specifies the itertor which points to the position where insertion is to be done
        // 2nd paramter is value :- it specifies the value that has to be inserted
    auto ptr1 = vect.insert(vect.begin(),101);
    cout<<"insert(position itertor , value ) "<<*ptr1<<endl;
    // 4 erase()
        //it is used to remove element form a vector from a specified position or a range
    vector<int> v1{1,2,3,4,5,6,7,8,9,10};
        v1.erase(v1.begin()+2,v1.begin()+6);// this will remove from the range begin()+2 which is 3 upto begin()+6 which 6
    for(auto it = v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    // 5 swap()
        //it is used to swap the content of two vector with another vector of same type. size my differ
        //syntax
            //vect1.swap(vect2);
    vector<int>pre_vect{1,2,3,4,5};
    vector<int>curr_vect{6,7,8,9,10};
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"pre_vector before swapping "<<endl;
    for(auto it = pre_vect.begin();it!=pre_vect.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"curr_vector before swapping "<<endl;
    for(auto it = curr_vect.begin();it!=curr_vect.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    pre_vect.swap(curr_vect);
    cout<<"pre_vector after swapping "<<endl;
    for(auto it = pre_vect.begin();it!=pre_vect.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"curr_vector after swapping "<<endl;
    for(auto it = curr_vect.begin();it!=curr_vect.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    // 6 clear()
        // it is used to remove all the element of the vector()
    pre_vect.clear();
    cout<<"size of "<< pre_vect.size()<<endl;
    for(auto it = pre_vect.begin();it!=pre_vect.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}