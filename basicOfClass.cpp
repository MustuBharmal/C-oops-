#include<iostream>
using namespace std;
class Demo{
    // access specifier
public: 
    // Data  Members 
    int a;
    int b;

    //Default constructor
    Demo(){
        cout<<"Default constructor"<<endl;
    }

    //Parameterized constructor
    Demo(int a, int b):a(a),b(b){
        // this->a = a;
        // this->b = b;
        cout<<"Parameterized constructor "<<a << " "<< b<<endl;
    }

    // Member Functions() inside the class 
    void print(){
        cout<<a<<" "<<b<<endl;
    }
    
};
// member function outside the class
/*void Demo::print(){
    cout<<a<<" "<<b<<endl;
}*/
int main(){
    
    /*ab.a = 67;
    ab.b = 76;
    ab.print();
*/

/*
    Demo d1; // data members a, b
    Demo d2; // data members a, b
    d1.print();
    d2.print();
    d1.a = 5; // used a, unused b
    d2.b = 6; // used b, unused a
    d1.print();
    d2.print();
*/
    Demo d (5, 10);
    d.print();
    return 0;
}