#include<iostream>
using namespace std;

class A  {

    private: 
    int a;
    protected:
    int b;
    public:
    int c;

};

int main(){

A obj; 
//obj.a=100;
//obj.b=20;
obj.c=45;

//cout<<obj.a<<endl;  //not allowed because it is private
//cout<<obj.b<<endl;  // not allowed because it is protected
cout<<obj.c<<endl;  // allowed because it is public 

    return 0;
}
