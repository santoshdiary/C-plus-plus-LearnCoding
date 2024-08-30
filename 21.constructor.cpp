// #include<iostream>
// using namespace std;
// class A{

// int a,b;
// public:
// A() //defult constructor
// {
//     a=12; b=23;
//     cout<<a<<" "<<b;
// }

// };
// int main(){
//     A obj;  //object of class
    
    
//     return 0;

// }




// #include<iostream>
// using namespace std;
// class A{

// int a,b;
// public:
// A(int a,int b) //parametrized constructor
// {
    
//     cout<<a<<" "<<b;
// }

// };
// int main(){
//     A obj(1000,300);  //object of class
    
    
//     return 0;

// }

#include<iostream>
using namespace std;
class A{

int x , y;
public:
A(int a, int b) //parametrized constructor
{
    x=a; y=b;

    cout<<x<<" "<<y<<endl;
}
A(A &ref)  //copy constructor
{

    x=ref.x;
    y=ref.y;
     cout<<x<<" "<<y<<endl; 


}

};
int main(){
    A obj(1000  ,300);  //object of class
    A obj2=obj;
    
    return 0;

}








