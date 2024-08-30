#include<iostream>
using namespace std;


int z=67; //        (1) Global variable-   it written at out of main function

int main(){


//Types of variable-

int b=10;  //        (2)local variable
static int c=23; //  (3)static variable
cout<< b<<" " << c <<endl;

  return 0;
}
// int float=3.56 , not possible becasue here float is a keyword 