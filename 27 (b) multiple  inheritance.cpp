#include<iostream>
using namespace std;
int a, b ,c;
class A{

public:

void input();
void add();
};

void A :: input(){                 // we can write code of class function
    cout<<"Enter two Number:"<<endl;  // on out of class body by the help of scope resolution operator '::'
    cin>>a>>b;
}
void A  :: add(){
    int c;
    c=a+b;
    cout<<"Addition:"<<c<<endl;

}

class B{

public:
void sub();
};

void B ::sub(){
c=a-b;
cout<<"Subtraction:"<<c<<endl;
}
class C: public A,public B{
	public:
void multi();
void div();
};
void C::multi(){
    
c=a*b;
cout<<"Multiplication:"<<c<<endl;


}

void C ::div(){
    
c=a/b;
cout<<"Divison:"<<c<<endl;


}
int main(){


C obj;
obj.input();
obj.add ();
obj.sub();
obj.multi();
obj.div();
    return 0;
}