#include<iostream>
using namespace std;

class animal {
    public:
    virtual void sound ()=0; //pure virtual fun.
    void eat (){
        cout<<"Animal Eating";
    }
};
class dog:public animal {
    public:
    void sound(){
        cout<<"Woof Woof ...."<<endl;
    }
};
int main(){


dog d;
d.sound();
d.eat();


    return 0;
}