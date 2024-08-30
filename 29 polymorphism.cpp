// // function over loding -

// #include<iostream>
// using namespace std;
// class A {
//     int num1, num2,s,m;
// public:
// void person (){
//     cout<<"Enter two Number:";
//     cin>>num1>>num2;
//     s=num1+num2;
//     cout<<"Addition:"<<s<<endl;
// }
// void person (int a, int b){
//     m=a*b;
//     cout<<"Multiplication:"<<m<<endl;
// }

// };
// int main (){
//      A obj;
    
//      obj.person();
//       //obj.person(10,20);

//      return 0;
// }



// 2. function over riding - 

#include<iostream>
using namespace std;
class A {


public:
   virtual   void person (){
    cout<<"Good morning "<<endl;

}
};
class B : public A{
public:
void person (){
    cout<<"Good night "<<endl;
    
}
};
int main(){


B  obj;
//obj.person();
obj.A :: person() ;   // :: - scop  resolution operator 


//or

/*  

A*p;
B obj;
p=&obj; // hold the  address of obj b 
p->person();  //if we want to use class  B 's  person fun. we need  make virtual fun of class A's person fun.


*/

    return 0;
}