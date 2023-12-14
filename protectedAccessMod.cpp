#include<iostream>
using namespace std;
/*
private: in private access modifier private data member is only accessible in its own class and by friend function
protected: it inherit all properties of private access modifier and it also allow its protected data member and 
            functions to be accessed in its subclass.
*/
class SuperClass{
    protected:

    int id_num;
    string name;

    void print(){
        cout<<"My name is " << name <<" and my ID is "<<id_num<<endl;
    }
};
class SubClass : public SuperClass{
    public:

    void get(int id, string naam){
        id_num = id;
        name = naam;
        print();
    }
   
};
int main(){
    SubClass s;
    s.get(14, "Mustafa");
}