#include<iostream>
using namespace std;
class A {

protected:
    int a,b;
    public:
    void input (){
        cout<<"Enter two Number:";
        cin>>a>>b;
    }

};
class B : public A{
    int c;

public:

void add(){
    c=a+b;
    cout<<" Addtition:"<<c<<endl;

}
void sub(){
    c=a-b;
    cout<<" Substraction:"<<c<<endl;
    
}



};
class C :public B {
int c;
public:

void multi (){


    c=a*b;
    cout<<"Multiplicaion:"<<c<<endl;
}


void div (){


    c=a/b;
    cout<<"Division::"<<c<<endl;
}


};
int main (){
    
    
   C obj;
obj.input();
obj.add();
 obj.sub();
 obj.div();   
 obj.multi();
    
    
    
    return 0;




}