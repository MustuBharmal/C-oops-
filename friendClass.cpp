#include<iostream>
using namespace std;

class BaseClass{
private:
    string privateVar;
protected:
    string protectedVar;
public:
    string publicVar;
    BaseClass(){
        privateVar = "Private variable";
        protectedVar = "Protected variable";
        publicVar = "Public variable";
    }
    friend class FriendClass;
};

class FriendClass{
public:
    void display(BaseClass b){
        cout<<b.privateVar<<" and "<<b.protectedVar<<" and "<<b.publicVar<<endl;
    }

};

int main(){
    BaseClass b;
    FriendClass f;
    f.display(b);

    // for(int i = 0; i < 1000; i++){
    //     cout<<"Tas is beautiful and she is sexy"<<endl;
    // }
}