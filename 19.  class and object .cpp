#include<iostream>
using namespace std;

class santosh           /*santosh is name of 'class'  ; Data member - variable which is written upto public: area which is ususally private  */
{
    public: 
    void show(){               //'show' is a function which store behaviour of class
    cout<<"Welcome to Santosh PC";
    }
};

 int main (){

santosh aman; //'aman' is object's name of santosh's class 
aman.show();  // fun calling



    return 0;
 }