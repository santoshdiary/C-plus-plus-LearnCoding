#include<iostream>
using namespace std;
 int count=0;
 class A 
 {
    public:
   A(){
    cout<<" object "<<++count<<" created "<<endl;

   }
  ~A() // destructor 
  {
    cout<<"object"<<count--<<" deleted"<<endl;
    
   }
 };
 int main(){

  A obj1,obj2,obj3;
    return 0;
 }