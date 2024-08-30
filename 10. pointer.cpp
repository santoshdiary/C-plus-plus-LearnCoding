#include<iostream>
using namespace std;
int main(){

int *p;     //pointer '*p'


int a=10;

p=&a;      // 'P' holds another's variable "a " address, here '&'(n percent) is address of 'a' variable
          // cheking the ADDRESS of a and p- 
// cout<<&a<<endl;
// cout<<p;       //out put  here address of "a" and 'p'( pointer) are same that means "p" holds the address of "a"




//checking the VALUE of  a and p-
cout<<"a="<<a<<endl;
cout<<"p="<<*p<<endl;// here '*'the 'value' which cantain by the point 'P'




    return 0;
}