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
    friend void friendFun(BaseClass b);
};

void friendFun(BaseClass b){
    cout<<b.privateVar<<" and "<<b.protectedVar<<" and "<<b.publicVar<<endl;
}
int main(){
    BaseClass b;
    friendFun(b);

    return 0;
}